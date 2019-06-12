//
// Created by shubhgkr on 12/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-the-earning-137963bc-323025a6/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int s;
	std::cin >> s;
	while (s--) {
		int n, r;
		std::cin >> n >> r;
		int x, maxH;
		long sum = 0;
		std::cin >> x;
		maxH = x;
		sum = r;
		while (--n) {
			std::cin >> x;
			if (x > maxH) {
				sum += r;
				maxH = x;
			}
		}
		std::cout << sum << "\n";
	}
	return 0;
}