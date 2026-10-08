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
02_DataMetricsToolkit/
├── CMakeLists.txt          # Root orchestrator
├── libs/
│   ├── logger/             # Diagnostics and output utility
│   └── stats/              # Statistical compute engine
├── app/                    # CLI driver executable
└── docs/                   # Technical architecture documentation
```