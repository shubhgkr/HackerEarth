//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/short-name/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s, token;
	std::getline(std::cin, s);
	std::vector<std::string> tokens;
	std::istringstream iss(s);
	while (std::getline(iss, token, ' ')) {
		tokens.push_back(token);
	}
	std::string ans, sep = ". ";
	for (int i = 0; i < tokens.size() - 1; i++)
		ans += tokens[i][0] + sep;
	ans += tokens[tokens.size() - 1];
	std::cout << ans;
}
