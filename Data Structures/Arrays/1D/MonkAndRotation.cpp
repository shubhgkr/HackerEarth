//
// Created by shubhgkr on 12/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n, k;
		std::cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		if (k > n)
			k %= n;
		for (int i = 0; i < n; i++)
			std::cout << a[(i + n - k) % n] << " ";
		std::cout << "\n";
	}
	return 0;
}
