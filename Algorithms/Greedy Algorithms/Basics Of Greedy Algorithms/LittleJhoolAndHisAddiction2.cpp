//
// Created by shubhgkr on 17/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/little-jhool-and-his-addiction-2-4/

#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        int k;
        std::cin >> n >> k;
        int itemList[n];
        for (int i = 0; i < n; i++)
            std::cin >> itemList[i];
        std::sort(itemList, itemList + n);
        int len = n >> 1;
        int sumList[len];
        for (int i = 0; i < len; ++i) {
            sumList[i] = itemList[i] + itemList[n - 1 - i];
        }
        std::sort(sumList, sumList + len);
        int diff = sumList[len - 1] - sumList[0];
        if (diff == k) {
            std::cout << diff << "\nLucky chap!\n";
        } else if (diff > k) {
            std::cout << diff << "\nNo more girlfriends!\n";
        } else {
            std::cout << diff << "\nChick magnet Jhool!\n";
        }
    }
    return 0;
}