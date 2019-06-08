//
// Created by shubhgkr on 8/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/binary-swap-b91d9bef/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string a, b;
	std::cin >> a >> b;
	int c = 0;
	for (int i = 0; i < a.length(); i++)
		if (a[i] != b[i])
			c++;
	int ans = c & 1 ? -1 : c / 2;
	std::cout << ans;
}