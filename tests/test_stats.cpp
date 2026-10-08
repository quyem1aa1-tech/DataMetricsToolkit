#include "stats/stats.hpp"
#include <gtest/gtest.h>
#include <vector>

// Kiểm tra tính Mean
TEST(StatsTest, CalculateMeanSuccess)
{
    std::vector<double> data = {10.0, 20.0, 30.0};

    // EXPECT_DOUBLE_EQ: Macro của GTest để so sánh 2 số thực chính xác
    EXPECT_DOUBLE_EQ(stats::calculate_mean(data), 20.0);
}

// Kiểm tra tính Median với số phần tử lẻ
TEST(StatsTest, CalculateMedianOdd)
{
    std::vector<double> data = {7.8, 45.0, 12.5, 99.2, 33.1};
    EXPECT_DOUBLE_EQ(stats::calculate_median(data), 33.1);
}

// Kiểm tra tính Median với số phần tử chẵn
TEST(StatsTest, CalculateMedianEven)
{
    std::vector<double> data = {10.0, 40.0, 20.0, 30.0};
    EXPECT_DOUBLE_EQ(stats::calculate_median(data), 25.0);
}

// Kiểm tra trường hợp biên: Mảng rỗng
TEST(StatsTest, HandlesEmptyVector)
{
    std::vector<double> empty_data;
    EXPECT_DOUBLE_EQ(stats::calculate_mean(empty_data), 0.0);
    EXPECT_DOUBLE_EQ(stats::calculate_median(empty_data), 0.0);
}


// EXPECT_EQ(a, b)
// EXPECT_FLOAT_EQ(a, b)
// EXPECT_DOUBLE_EQ(a, b)
// EXPECT_NEAR(a, b, epsilon)
