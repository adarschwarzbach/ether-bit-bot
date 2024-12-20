# ether-bit-bot


```sh
ether-bit-bot/
├── src/
│   ├── main.cpp                # Entry point of the program
│   ├── bot/
│   │   ├── TradingBot.h        # Class declaration for the trading bot logic
│   │   ├── TradingBot.cpp      # Implementation of the trading bot logic
│   ├── exchange/
│   │   ├── KrakenAPI.h         # Class declaration for Kraken API wrapper
│   │   ├── KrakenAPI.cpp       # Implementation of the Kraken API wrapper
│   │   ├── WebSocketClient.h   # WebSocket client declaration for real-time data
│   │   ├── WebSocketClient.cpp # WebSocket client implementation for real-time data
│   ├── utils/
│   │   ├── JsonParser.h        # Helper functions/classes for parsing JSON responses
│   │   ├── JsonParser.cpp      # Implementation of JSON parsing
│   │   ├── Logger.h            # Utility for logging messages and errors
│   │   ├── Logger.cpp          # Implementation of the logging utility
├── include/                    # Shared headers (optional for clarity)
├── config/
│   ├── config.json             # Configuration file for API keys and settings
├── tests/
│   ├── test_main.cpp           # Main file for running unit tests
│   ├── test_TradingBot.cpp     # Tests for TradingBot
│   ├── test_WebSocketClient.cpp # Tests for WebSocketClient
│   ├── test_KrakenAPI.cpp      # Tests for KrakenAPI
├── CMakeLists.txt              # CMake build configuration
├── README.md                   # Documentation for the project
```