//
// Created by shubhgkr on 18/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/no-sharing-capillary-82ed3fe2/editorial/

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        int n, p, q, r;
        std::cin >> n >> p >> q >> r;
        int count = 0;
        while (n) {
            if ((n % p == 0 && n % q != 0 && n % r != 0) || (n % q == 0 && n % p != 0 && n % r != 0) ||
                (n % r == 0 && n % q != 0 && n % p != 0))
                count++;
            n--;
        }
        std::cout << count << "\n";
    }
    return 0;
}