#pragma once
#include <vector>

namespace stats
{
    double calculate_mean(const std::vector<double> &data);

    double calculate_max(const std::vector<double> &data);

    double calculate_median(std::vector<double> data);

}