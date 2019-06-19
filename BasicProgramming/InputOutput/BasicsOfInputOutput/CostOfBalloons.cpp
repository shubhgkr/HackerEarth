//
// Created by shubhgkr on 20/6/19.
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        int cost1, cost2;
        std::cin >> cost1 >> cost2;
        int n;
        std::cin >> n;
        int x, cnt1 = 0, cnt2 = 0;
        while (n--) {
            std::cin >> x;
            cnt1 += x;
            std::cin >> x;
            cnt2 += x;
        }
        std::cout << std::min(cost1, cost2) * std::max(cnt1, cnt2) + std::max(cost1, cost2) * std::min(cnt1, cnt2)
                  << "\n";
    }
    return 0;
}