//
// Created by shubhgkr on 18/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/long-atm-queue-3/

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    int count = 1;
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            count++;
    std::cout << count;
    return 0;
}