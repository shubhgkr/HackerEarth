//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sumits-string/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t, i;
	std::string s;
	std::cin >> t;
	while (t--) {
		std::cin >> s;
		bool flag = true;
		for (i = 0; s.length() - 1 > i; i++) {
			if (!(s[i] == 'z' && s[i + 1] == 'a') && !(s[i] == 'a' && s[i + 1] == 'z') &&
				1 != std::abs(s[i] - s[i + 1])) {
				flag = false;
				break;
			}
		}
		std::cout << (flag ? "YES\n" : "NO\n");
	}
	return 0;
}