# Modules Specification

### 1. libs/logger (Utility Layer)
* **Target:** `logger` (STATIC)
* **Role:** Standalone logging utility.
* **Responsibilities:** Output formatted logs (`INFO`, `WARN`, `ERROR`, `DEBUG`) to `stdout`/`stderr`.
* **Include Scope:** `include/` (`PUBLIC`)
* **Dependencies:** None

### 2. libs/stats (Core Engine Layer)
* **Target:** `stats` (STATIC)
* **Role:** Statistical calculation engine.
* **Responsibilities:** Compute Max, Mean; benchmark execution time if enabled.
* **Include Scope:** `include/` (`PUBLIC`)
* **Dependencies:** `logger` (`PRIVATE`)

### 3. app (Driver Layer)
* **Target:** `datametrics` (EXECUTABLE)
* **Role:** CLI application entry point (`main.cpp`).
* **Responsibilities:** Provide sample dataset, execute `stats` algorithms, and display results.
* **Dependencies:** `stats`, `logger` (`PRIVATE`)


