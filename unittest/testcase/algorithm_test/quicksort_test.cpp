#include <gtest/gtest.h>
#include "quicksort.h"

TEST(Quicksort_Test, quicksort_test) {
    // 正常排序测试
    std::vector<int> arr1 = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<int> expected1 = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};

    quicksort(arr1, 0, arr1.size() - 1);

    EXPECT_EQ(arr1, expected1);

    // 空数组测试
    std::vector<int> arr2;
    std::vector<int> expected2;

    quicksort(arr2, 0, arr2.size() - 1);

    EXPECT_EQ(arr2, expected2);

    // 已排序数组测试
    std::vector<int> arr3 = {1, 2, 3, 4, 5};
    std::vector<int> expected3 = {1, 2, 3, 4, 5};

    quicksort(arr3, 0, arr3.size() - 1);

    EXPECT_EQ(arr3, expected3);

    // 逆序数组测试
    std::vector<int> arr4 = {5, 4, 3, 2, 1};
    std::vector<int> expected4 = {1, 2, 3, 4, 5};

    quicksort(arr4, 0, arr4.size() - 1);

    EXPECT_EQ(arr4, expected4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
