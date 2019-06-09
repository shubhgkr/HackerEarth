//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/nobita-and-string-4/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::cin.ignore();
	while (t--) {
		std::string s;
		std::getline(std::cin, s);
		std::istringstream iss(s);
		std::vector<std::string> tokens;
		std::string token;
		while (std::getline(iss, token, ' ')) {
			tokens.push_back(token);
		}
		for (int i = tokens.size() - 1; i >= 0; i--)
			std::cout << tokens[i] << " ";
		std::cout << "\n";
	}
	return 0;
}
