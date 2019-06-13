//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/mirror-of-mahatma-gandhi/
#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		std::string s;
		std::getline(std::cin, s);
		std::string s2(s);
		bool flag = false;
		for (char ch:s) {
			if (ch == '0' || ch == '1' || ch == '8')
				continue;
			flag = true;
			break;
		}
		std::reverse(s2.begin(), s2.end());
		if (flag || s2 != s)
			std::cout << "NO\n";
		else
			std::cout << "YES\n";
	}
	return 0;
}