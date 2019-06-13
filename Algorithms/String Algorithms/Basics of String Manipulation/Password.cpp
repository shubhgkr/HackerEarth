//
// Created by shubhgkr on 14/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/password-1/
#include<iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	std::string arr[n];
	int i, j;
	for (i = 0; i < n; i++) {
		std::cin >> arr[i];
		for (j = 0; j < i; j++) {
			std::string rev(arr[j]);
			std::reverse(rev.begin(), rev.end());
			if (arr[j] == arr[i] || arr[i] == rev)
				break;
		}
		if (j != i)
			break;
	}
	std::cout << arr[i];
	return 0;
}