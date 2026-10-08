#include <logger/logger.hpp>
#include <stats/stats.hpp>
#include <formatter/formatter.hpp>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    logger::info("Starting DataMetrics Toolkit...");

    vector<double> dataset = {12.5, 45.0, 7.8, 99.2, 33.1};
    vector<double> otherdataset = {10.0, 20.0, 30.0, 40.0};

    double mean = stats::calculate_mean(dataset);
    double max_val = stats::calculate_max(dataset);
    double median = stats::calculate_median(otherdataset);

    std::vector<double> empty_data;

    stats::calculate_mean(empty_data);

    cout << formatter::format_result("MEAN", mean);
    cout << formatter::format_result("MAX", max_val);
    cout << formatter::format_result("MEDIAN", median);

    return 0;
}