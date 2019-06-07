//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/compiler-version-2/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	while (std::getline(std::cin, s)) {
		bool flag = 1;
		for (int i = 0; i < s.length(); i++) {
			if (flag) {
				if (s[i] == '-' && s[i + 1] == '>') {
					std::cout << ".";
					i = i + 1;
				} else if (s[i] == '/' && s[i + 1] == '/') {
					std::cout << "/";
					flag = false;
				} else
					std::cout << s[i];
			} else {
				for (; i < s.length(); i++)
					std::cout << s[i];
			}
		}
		std::cout << "\n";
	}
	return 0;
}