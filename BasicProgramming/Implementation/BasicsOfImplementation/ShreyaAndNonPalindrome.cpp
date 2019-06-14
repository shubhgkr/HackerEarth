//
// Created by shubhgkr on 15/6/19.
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/shreya-and-non-palindrome/
#include<iostream>
#include<string>
#include<algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::cin >> s;
	int len = s.length() - 1;
	int i = 0;
	for (i = 0; i < len; i++)
		if (s[i] != s[i + 1])
			break;
	if (i == len)
		std::cout << "0";
	else if (s[0] != s[len])
		std::cout << len + 1;
	else
		std::cout << len;
	return 0;
}