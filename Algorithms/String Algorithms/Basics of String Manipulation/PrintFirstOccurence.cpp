//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/print-first-occurence/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s1, ans;
		std::cin >> s1;
		for (char ch:s1) {
			int pos = ans.find(ch);
			if (pos == std::string::npos)
				ans += ch;
		}
		std::cout << ans << "\n";
	}
	return 0;
}
