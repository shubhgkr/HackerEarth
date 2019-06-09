//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/count-enemies-5/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t = 0;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		s = "*" + s + "*";
		int count = 0;
		for (int i = 0, c = 0; i < s.length(); ++i) {
			if (s[i] == '*') {
				count += c;
				c = 0;
			} else if (s[i] == 'X') {
				i = s.find('*', i + 1);
				c = 0;
			} else
				c++;
		}
		std::cout << count << "\n";
	}
	return 0;
}