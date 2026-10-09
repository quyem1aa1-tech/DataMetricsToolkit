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
