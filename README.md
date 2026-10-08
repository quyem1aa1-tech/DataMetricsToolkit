# DataMetrics-Toolkit

A modular C++ command-line utility for statistical data analysis and benchmarking, built with Modern CMake practices.

---

## Features
* **Modular Design:** Decoupled logging engine and computational statistical core.
* **Modern CMake:** Target-centric configuration with strict compiler warnings enabled (`-Wall -Wextra`).
* **Multi-Configuration:** Built-in support for Debug diagnostics and Release performance optimizations.
* **Benchmarking:** Optional compile-time high-resolution execution timing.

---

## Directory Overview
```text
DataMetrics-Toolkit/
├── CMakeLists.txt              # Root
├── libs/
│   ├── logger/                 # Module to write log
│   │   ├── CMakeLists.txt
│   │   ├── include/logger/
│   │   │   └── logger.h
│   │   └── src/logger.cpp
│   └── stats/                  # Module calculation
│   │   ├── CMakeLists.txt
│   │   ├── include/stats/
│   │   │   └── stats.h
│   │   └── src/stats.cpp
│   └── formatter/
│       ├── CMakeLists.txt
│       ├── include/formatter/
│       │   └── formatter.hpp
│       └── src/formatter.cpp
├── tests/ ...                  # Learn how to use GTest
└── app/                        # include 2 modules 
    ├── CMakeLists.txt
    └── main.cpp
```
