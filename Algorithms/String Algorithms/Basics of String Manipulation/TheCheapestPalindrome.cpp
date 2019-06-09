//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/make-the-cheapest-palindrome-1/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		int a;
		int b;
		std::cin >> s >> a >> b;
		int cost = 0;
		int i = 0;
		int j = s.length() - 1;
		for (; i < j; i++, j--) {
			if (s[i] == s[j]) {
				if (s[i] == '/')
					cost += (2 * std::min(a, b));
			} else {
				if (s[i] == '/' || s[j] == '/') {
					if (s[i] == 'a' || s[j] == 'a')
						cost += a;
					else
						cost += b;
				} else
					break;
			}
		}
		if (i < j) std::cout << "-1\n";
		else
			std::cout << cost << "\n";
	}
	return 0;
}
