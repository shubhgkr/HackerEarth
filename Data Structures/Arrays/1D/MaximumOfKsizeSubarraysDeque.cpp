//
// Created by shubhgkr on 17/6/19.
// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximum-of-k-size-subarrays-deque/

#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, k;
    std::cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    for (int i = 0; i < n - k + 1; i++) {
        std::cout << *std::max_element(arr + i, arr + i + k) << " ";
    }
    return 0;
}