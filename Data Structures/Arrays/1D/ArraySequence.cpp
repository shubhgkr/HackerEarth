//
// Created by shubhgkr on 17/6/19.
// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/modify-sequence/

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    int num, left = 0;
    while (n--) {
        std::cin >> num;
        left = num - left;
    }
    std::cout << (left ? "NO\n" : "YES\n");
    return 0;
}