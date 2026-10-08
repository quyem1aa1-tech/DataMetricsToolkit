#include <stats/stats.hpp>
#include <logger/logger.hpp>
#include <numeric>
#include <algorithm>

namespace stats
{

    double calculate_mean(const std::vector<double> &data)
    {
        if (data.empty())
        {
            logger::error("Data is empty, cannot calculate...");
            return 0.0;
        }

        if (data.size() == 1)
        {
            logger::warn("Dataset contains only 1 element.");
        }

        logger::info("Calculating mean...");

        double sum = 0.0;
        for (double value : data)
        {
            sum += value;
        }

        return sum / data.size();
    }

    double calculate_max(const std::vector<double> &data)
    {
        if (data.empty())
        {
            logger::error("Data is empty, cannot calculate...");
            return 0.0;
        }

        logger::info("Calculate max...");

        double data_max = data[0];
        for (double value : data)
        {
            if (data_max < value)
            {
                data_max = value;
            }
        }

        return data_max;
    }

    double calculate_median(std::vector<double> data)
    {
        if (data.empty())
        {
            logger::error("Data is empty, cannot calculate...");

            return 0.0;
        }

        std::sort(data.begin(), data.end());

        int n = data.size();

        if (data.size() % 2 != 0)
        {

            return data[n / 2];
        }

        return (data[n / 2 - 1] + data[n / 2]) / 2.0;
    }

}