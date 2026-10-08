#include <logger/logger.hpp>
#include <iostream>

namespace logger
{

    void info(std::string_view message)
    {
        std::cout << "[INFO] " << message << '\n';
    }

    void error(std::string_view message)
    {
        std::cerr << "[ERROR] " << message << '\n';
    }
    
    void warn(std::string_view message)
    {
        std::clog << "[WARN]  " << message << '\n';
    }

    void debug([[maybe_unused]] std::string_view message)
    {
#if defined(DEBUG_PRINT_ENABLED)
        std::cout << "[DEBUG] " << message << '\n';
#endif
    }

}