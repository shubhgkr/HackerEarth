//
// Created by shubhgkr on 10/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-lucky-minimum-3/
#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int min = 1000000000;
		int count = 1;
		int x;
		while (n--) {
			std::cin >> x;
			if (x < min) {
				min = x;
				count = 1;
			} else if (x == min)
				count++;
		}
		std::cout << (count & 1 ? "Lucky\n" : "Unlucky\n");
	}
	return 0;
}
