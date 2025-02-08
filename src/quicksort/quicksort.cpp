#include "../include/quicksort.h"

// arr = {8, 3, 1, 7, 0, 10, 2, 5}

// 3 8 1 7 0 10 2 5
// 3 1 8 7 0 10 2 5
// 3 1 0 7 8 10 2 5
// 3 1 0 2 8 10 7 5
// 3 1 0 2 5 10 7 8

// 3 1 0 2
// 1 3 0 2
// 1 0 3 2
// 1 0 2 3

// 1 0
// 0 1

// 0 1 2 3

// 10 7 8
// 7 10 8
// 7 8 10

// 分区函数，用于将数组分为两部分
static int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// 快速排序函数
void quicksort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
