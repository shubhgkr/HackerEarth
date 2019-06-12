//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/easy-strong-permutation/
#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int a[n];
	std::cout << a[0] << "\n" << a[1];
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::sort(a, a + n);
	long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += std::abs(a[n - 1] - a[i]);
		sum += std::abs(a[n - 2] - a[i]);
		n -= (i & 1) << 1;
	}
	std::cout << sum;
	return 0;
}