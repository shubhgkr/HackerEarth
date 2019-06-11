//
// Created by shubhgkr on 11/6/19.
// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/biased-chandan/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int top = -1, n, m = 0, t;
	std::cin >> t;
	int arr[t];
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		n == 0 ? (top--) : (arr[++top] = n);
	}
	for (int i = 0; i <= top; i++)
		m += arr[i];
	std::cout << m << "\n";
	return 0;
}