//
// Created by shubhgkr on 12/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/k-rotation-is-what-you-can-855157f8/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, d;
	std::cin >> n >> d;
	int a[n];
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		std::cout << a[(i + d) % n] << " ";
	return 0;
}
