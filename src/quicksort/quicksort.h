#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

// 分区函数，用于将数组分为两部分
int partition(std::vector<int>& arr, int low, int high);

// 快速排序函数
void quicksort(std::vector<int>& arr, int low, int high);

#endif // QUICKSORT_H
