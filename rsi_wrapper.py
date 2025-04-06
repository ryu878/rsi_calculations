import ctypes
import numpy as np

# Load the compiled C++ library
lib = ctypes.CDLL('./rsi.so')  # We'll compile this next

# Tell Python what arguments the function expects
lib.calculate_rsi_simple.argtypes = [
    ctypes.POINTER(ctypes.c_double),  # prices array
    ctypes.c_int,                     # length of array
    ctypes.POINTER(ctypes.c_double)   # results array
]
lib.calculate_rsi_simple.restype = None  # No return value

def calculate_rsi_cpp(prices):
    """Simple wrapper for the C++ RSI function"""
    prices_array = np.array(prices, dtype=np.float64)
    results = np.empty(len(prices), dtype=np.float64)
    
    # Get C-compatible pointers
    prices_ptr = prices_array.ctypes.data_as(ctypes.POINTER(ctypes.c_double))
    results_ptr = results.ctypes.data_as(ctypes.POINTER(ctypes.c_double))
    
    # Call the C++ function
    lib.calculate_rsi_simple(prices_ptr, len(prices), results_ptr)
    
    return results
