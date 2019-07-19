//
// Created by shubhgkr on 18/7/19.
// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/intelligent-girl-1/description/

#include<iostream>
#include<string>
#include<algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::cin >> s;
	int len = s.length();
	int arr[len + 1];
	std::fill(arr, arr + len + 1, 0);
	for (int i = len - 1; i >= 0; i--) {
		arr[i] = !(s[i] & 1) + arr[i + 1];
	}
	for (int i = 0; i < len; i++)
		std::cout << arr[i] << " ";
	return 0;
}