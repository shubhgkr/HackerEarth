//
// Created by shubhgkr on 13/08/19.
// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subset-and-4/

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int z;
		std::cin >> z >> n;
		int x;
		while (n--) {
			std::cin >> x;
			z &= x;
		}
		if (z)
			std::cout << "No\n";
		else
			std::cout << "Yes\n";
	}
	return 0;
}