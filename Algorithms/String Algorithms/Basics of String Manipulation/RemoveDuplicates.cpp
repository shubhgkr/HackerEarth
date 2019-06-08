//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/remove-duplicates-3/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s1;
	std::string ans;
	std::cin >> s1;
	for (int i = 0, count = 0; i < s1.length() && count != 26; i++) {
		char ch = s1[i];
		int pos = ans.find(ch);
		if (pos == std::string::npos) {
			ans += ch;
			count++;
		}
	}
	std::cout << ans << "\n";
	return 0;
}
