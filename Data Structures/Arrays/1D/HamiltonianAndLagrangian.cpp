//
// Created by shubhgkr on 18/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/hamiltonian-and-lagrangian/description/

#include <iostream>

int main() {
    std::ios_base::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    int arr[n];
    bool flag[n] = {0};
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    int mx = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= mx) {
            mx = arr[i];
            flag[i] = true;
        }
    }
    for (int i = 0; i < n; i++)
        if (flag[i])
            std::cout << arr[i] << " ";
    return 0;
}