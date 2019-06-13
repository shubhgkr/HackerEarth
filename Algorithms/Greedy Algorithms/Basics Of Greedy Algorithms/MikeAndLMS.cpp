//
// Created by shubhgkr on 14/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/mike-and-lms/description/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int len;
	std::cin >> len;
	std::string s;
	std::cin >> s;
	std::string ans = "";
	for (int i = 0; i < len; i++)
		if (s.substr(i) > ans)
			ans = s.substr(i);
	std::cout << ans;
	return 0;
}