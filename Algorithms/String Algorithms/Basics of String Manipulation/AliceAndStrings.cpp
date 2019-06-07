//
// Created by shubhgkr on 7/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/aliceandstrings-9da62aa7/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s1, s2;
	std::cin >> s1 >> s2;
	int l1 = s1.length();
	int l2 = s1.length();
	if (l1 != l2)
		std::cout << "NO";
	else {
		bool flag = true;
		for (int i = 0; i < l1; i++)
			if (s1[i] > s2[i]) {
				flag = false;
				break;
			}
		if (flag)
			std::cout << "YES";
		else
			std::cout << "NO";
	}
	return 0;
}