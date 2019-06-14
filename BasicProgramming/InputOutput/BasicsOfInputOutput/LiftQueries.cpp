//
// Created by shubhgkr on 15/6/19.
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/
#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int aPos = 0, bPos = 7;
	while (t--) {
		int n;
		std::cin >> n;
		if (n <= (bPos + aPos) / 2) {
			std::cout << "A\n";
			aPos = n;
		} else {
			std::cout << "B\n";
			bPos = n;
		}
	}
	return 0;
}