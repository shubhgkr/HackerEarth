//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/monk-teaches-palindrome/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s1, s2;
		std::cin >> s1;
		s1 = s2;
		std::reverse(s1.begin(), s1.end());
		if (s1 == s2)
			std::cout << (s1.length() & 1u ? "YES ODD\n" : "YES EVEN\n");
		else
			std::cout << "NO\n";
	}
	return 0;
}
