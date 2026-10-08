#pragma once
#include <string>
#include <string_view>

namespace logger
{
    void info(std::string_view);
    void warn(std::string_view);
    void error(std::string_view);
    void debug([[maybe_unused]] std::string_view);

}