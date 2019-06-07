//
// Created by shubhgkr on 7/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/capicua-2/

#include <iostream>
#include <algorithm>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t, n;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		std::string s1 = std::to_string(n);
		std::string s2 = s1;
		std::reverse(s1.begin(), s1.end());
		if (s1 == s2)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}