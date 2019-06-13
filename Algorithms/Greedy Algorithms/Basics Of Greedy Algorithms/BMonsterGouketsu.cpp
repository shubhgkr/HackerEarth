//
// Created by shubhgkr on 14/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/monster-gouketsu/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long m, n, x, y;
		std::cin >> m >> n >> x >> y;
		if (n < m / x)
			std::cout << n << "\n";
		else {
			long rem = m % x;
			n = n - m / x;
			std::cout << (m / x + (n * y + rem) / (x + y)) << "\n";
		}
	}
	return 0;
}