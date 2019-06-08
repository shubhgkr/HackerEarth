//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/conversion-11/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::cin.ignore();
	std::string s, ans;
	while (t--) {
		ans = "";
		std::getline(std::cin, s);
		std::transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (char c:s) {
			if (c == ' ') ans += "$";
			else ans += std::to_string(c - 'a' + 1);
		}
		std::cout << ans << "\n";
	}
	return 0;
}
