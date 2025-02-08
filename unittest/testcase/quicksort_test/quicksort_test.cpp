#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>

#include "quicksort.h"

// 测试快速排序函数

TEST(Quicksort_Test, quicksort_test) {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};

    quicksort(arr, 0, arr.size() - 1);

    EXPECT_EQ(arr, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
