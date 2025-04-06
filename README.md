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
