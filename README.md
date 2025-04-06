# RSI Calculator with C++ Acceleration

![Python](https://img.shields.io/badge/python-3.8+-blue.svg)
![C++](https://img.shields.io/badge/C++-17-green.svg)

A high-performance Relative Strength Index (RSI) calculator that can switch between Python and optimized C++ implementations.

## 📦 Installation

### Prerequisites

```bash
# Ubuntu/Debian
sudo apt update
sudo apt install g++ python3-dev -y
```

```bash
g++ -shared -fPIC -O3 -o rsi.so rsi.cpp
```

### Compile C++ Code
```bash
g++ -shared -fPIC -O3 -o rsi.so rsi.cpp
```

### 🚀 Quick Start
Add these files to your project:

- rsi.cpp (C++ implementation)

- rsi_wrapper.py (Python interface)

In your Python code:
```bash
from rsi_wrapper import calculate_rsi_cpp

# Calculate RSI using C++
prices = [1,2,3,4,5,4,3,2,1,2,3,4,5,6,7,8]
rsi_values = calculate_rsi_cpp(prices)
print(rsi_values)
```
