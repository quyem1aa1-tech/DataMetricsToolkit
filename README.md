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
DataMetricsToolkit/
├── cmake/             # CMake helpers & toolchain configs
├── libs/              # Internal modular libraries
│   ├── logger/        # Structured logging engine
│   ├── stats/         # Statistical compute core
│   └── formatter/     # Output formatting utilities
├── app/               # Application entry point / CLI driver
└── tests/             # Unit tests suite (GoogleTest)
```

## Quick Start

### Prerequisites
* **Compiler:** C++17 compliant
* **Build System:** CMake 3.20+
* **Testing:** GoogleTest (fetched automatically via CMake if configured)

### 1. Build
```bash
# Configure build tree
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release

# Compile all targets
cmake --build build
```
### 2. Run Application
```bash
# On Linux / macOS:
.build/app/datametrics

# On Windows:
.\build\app\Release\datametrics.exe
```

### 3. Run Unit Tests
```bash
ctest --test-dir build --output-on-failure
```
