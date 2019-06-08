//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/invert-case-of-character/
#include<iostream>
#include<string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::getline(std::cin, s);
	int n1, n2;
	std::cin >> n1 >> n2;
	n1--;
	n2--;
	if (65 <= s[n1] && s[n1] <= 90)
		s[n1] = s[n1] - 'A' + 'a';
	else if (97 <= s[n1] && s[n1] <= 122)
		s[n1] = s[n1] - 'a' + 'A';
	if (65 <= s[n2] && s[n2] <= 90)
		s[n2] = s[n2] - 'A' + 'a';
	else if (97 <= s[n2] && s[n2] <= 122)
		s[n2] = s[n2] - 'a' + 'A';
	std::cout << s;
	return 0;
}