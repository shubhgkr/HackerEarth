//
// Created by shubhgkr on 10/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int prev;
		int curr;
		std::cin >> n >> prev;
		int count = 1;
		while (--n) {
			std::cin >> curr;
			if (prev > curr) {
				count++;
				prev = curr;
			}
		}
		std::cout << count << "\n";
	}
	return 0;
}
