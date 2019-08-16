//
// Created by shubhgkr on 16/08/19.
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/bag-of-numbers/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::getline(std::cin, s);
	int pos = s.find_first_of(' ');
	if (s[pos + 1] == '1')
		s.replace(0, pos, "output");
	else
		s.replace(0, pos, "output:");
	std::cout << s;
	return 0;
}