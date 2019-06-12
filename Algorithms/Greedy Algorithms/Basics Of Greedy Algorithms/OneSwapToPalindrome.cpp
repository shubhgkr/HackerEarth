//
// Created by shubhgkr on 12/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/one-swap-to-palindrome-d96d4e21/
#include<iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		char a, b, c, d;
		int n = s.length();
		int l = 0, r = n - 1;
		int count = 0;
		while (l < r) {
			if (s[l] != s[r]) {
				count++;
				if (count == 1) {
					a = s[l];
					b = s[r];
				} else if (count == 2) {
					c = s[l];
					d = s[r];
				} else
					break;
			}
			l++;
			r--;
		}
		if (count > 2)
			std::cout << "No\n";
		else if (count == 2) {
			if ((a == c && b == d) || (a == d && b == c))
				std::cout << "Yes\n";
			else
				std::cout << "No\n";
		} else if (count == 1) {
			if (!(n & 1))
				std::cout << "No\n";
			else if (s[n / 2] == a || s[n / 2] == b)
				std::cout << "Yes\n";
			else
				std::cout << "No\n";
		} else
			std::cout << "Yes\n";
	}
	return 0;
}