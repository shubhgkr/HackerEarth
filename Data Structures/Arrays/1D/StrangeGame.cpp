//
// Created by shubhgkr on 18/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/strange-game-1-7e758acb-1bff10f0/

#include <iostream>
#include <algorithm>

int scan() {
    register int c = getchar_unlocked();
    register int n = 0;
    for (; (c > 47 && c < 58); c = getchar_unlocked()) {
        n = (n << 1) + (n << 3) + c - 48;
    }
    return n;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t = scan();
    while (t--) {
        int n = scan(), k = scan();
        int alice[n], bob[n];
        for (int i = 0; i < n; i++)
            alice[i] = scan();
        for (int i = 0; i < n; i++)
            bob[i] = scan();
        int mxBob = *std::max_element(bob, bob + n) + 1;
        long sum = 0;
        for (int i = 0; i < n; i++)
            if (alice[i] < mxBob)
                sum += (mxBob - alice[i]);
        std::cout << sum * k << "\n";
    }
    return 0;
}