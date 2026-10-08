#include <formatter/formatter.hpp>
#include <string>
#include <string_view>
#include <sstream>

namespace formatter
{
    std::string format_result(std::string_view label, double value)
    {
        std::ostringstream oss;
        oss << "[RESULT] " << label << ": " << value << "\n";
        return oss.str();
    }
}