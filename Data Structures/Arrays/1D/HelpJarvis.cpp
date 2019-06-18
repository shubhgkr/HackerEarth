//
// Created by shubhgkr on 18/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/help-jarvis-8a39566e/s

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        std::string num;
        std::cin >> num;
        std::sort(num.begin(), num.end());
        bool flag = false;
        for (int i = 0; i < num.length() - 1; i++)
            if (num[i + 1] - num[i] != 1) {
                flag = true;
                break;
            }
        if (flag)
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
    return 0;
}