//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/terrible-chandu/
#include<iostream>
#include<string>
#include<algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		std::reverse(s.begin(), s.end());
		std::cout << s << "\n";
	}
	return 0;
}