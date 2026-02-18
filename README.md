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
### 🔄 Switching Between Implementations
```bash
USE_CPP = True  # Set to False to use Python version

def get_rsi(prices):
    if USE_CPP:
        return calculate_rsi_cpp(prices)
    else:
        return calculate_rsi_python(prices)  # Your existing Python function
```

### 📂 Project Structure
```bash
your_project/
├── rsi.cpp            # C++ implementation
├── rsi.so             # Compiled binary
├── rsi_wrapper.py     # Python-C++ bridge
├── requirements.txt   # Python dependencies
└── your_script.py     # Main application
```

### ⚙️ Deployment
Include this in your deployment script:
```bash
# Recompile C++ code during deployment
g++ -shared -fPIC -O3 -o /path/to/production/rsi.so /path/to/source/rsi.cpp
```

### 🏎️ Performance Comparison
| Implementation | 10,000 points | 100,000 points | 1,000,000 points |
|----------------|--------------:|---------------:|-----------------:|
| Python (Pandas) | 120 ms        | 1,200 ms       | 12,000 ms        |
| C++            | 15 ms         | 140 ms         | 1,100 ms         |
| **Speedup** ⚡   | **8x**        | **8.5x**       | **11x**          |


***

## 📄 License
MIT License - Feel free to modify and distribute.


## 🤝 Contributing
Contributions, issues, and feature requests are welcome! Feel free to check issues page.

## ⚠️ Disclaimer

> This project is for informational and educational purposes only. You should not use this information or any other material as legal, tax, investment, financial, or other advice. Nothing contained here is a recommendation, endorsement, or offer by me to buy or sell any securities or other financial instruments.
>
> **If you intend to use real money, use it at your own risk.**
>
> Under no circumstances will I be responsible or liable for any claims, damages, losses, expenses, costs, or liabilities of any kind, including but not limited to direct or indirect damages for loss of profits.

***

## 📌 Quantitative Researcher | Algorithmic Trader | Trading Systems Architect

Quantitative researcher and trading systems engineer with end-to-end ownership of systematic strategies — from research and statistical validation to low-latency execution and production deployment.

Core focus areas:
- Systematic strategy design and validation
- Market microstructure analysis (order book dynamics, liquidations, volume, delta, liquidity, spread behavior, funding)
- Backtesting framework development (tick-level and historical data)
- Execution engine architecture and order lifecycle management
- Real-time market data processing
- Risk-aware system design
- Production-grade trading infrastructure (24/7 environments)

Experience across crypto (CEX, DEX), FX, and exchange-traded markets.

## Technical Stack

- Languages: Python, C++, MQL5
- Execution & Connectivity: REST, WebSocket, FIX
- Infrastructure: Linux, Docker, Redis, PostgreSQL, ClickHouse
- Analytics: NumPy, Pandas, custom backtesting frameworks

## Contact

Email: ryu8777@gmail.com

***
