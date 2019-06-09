//
// Created by shubhgkr on 9/6/19.
// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/master-cf6dadd7/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		long long int count = 1;
		int vowelCount = 0;
		std::string vowels;
		for (char ch:s) {
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				if (vowels.find(ch, 0) == std::string::npos) {
					vowelCount++;
					vowels += ch;
				}
			} else if (ch == '_')
				count *= vowelCount;
		}
		std::cout << count << "\n";
	}
	return 0;
}
