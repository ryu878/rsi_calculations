# RSI Calculations
Calculate RSI using C++ or Python Pandas

<code>
sudo apt update
sudo apt install g++ python3-dev -y
</code>

<code>
g++ -shared -fPIC -o rsi.so rsi.cpp
</code>

Run this quick test in Python:
<code>
from rsi_wrapper import calculate_rsi_cpp
print(calculate_rsi_cpp([1,2,3,4,5,4,3,2,1,2,3,4,5,6,7,8]))
</code>
