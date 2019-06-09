//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/decode-1-6eab2976/
#include <iostream>
#include <string>
#include <deque>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		std::deque<char> ans;
		int len = s.length();
		for (int i = 0, diff = len; i < len; ++i, diff++) {
			if (diff & 1)
				ans.push_back(s[i]);
			else
				ans.push_front(s[i]);
		}
		for (char ch:ans)
			std::cout << ch;
		std::cout << "\n";
	}
	return 0;
}