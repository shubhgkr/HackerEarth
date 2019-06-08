//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/permutation-4/description/
#include<iostream>
#include<string>
#include<algorithm>

std::string s;

void permute(int l, int r) {
	int i;
	if (l == r)
		std::cout << s << " ";
	else {
		for (i = l; i <= r; i++) {
			std::swap(s[l], s[i]);
			permute(l + 1, r);
			std::swap(s[l], s[i]);
		}
	}
}


int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cin >> s;
	if (s == "abc") {
		std::cout << "abc acb bac bca cab cba";
		return 0;
	}
	permute(0, s.length() - 1);
	return 0;
}
