//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/jumping-champa-icpc-1/
#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n, q;
		std::cin >> n >> q;
		int a[n];
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		std::sort(a, a + n);
		int ans = 0;
		for (int i = 1; i < n; i++)
			ans += std::abs(a[i] - a[i - 1]);
		std::cout << ans << "\n";
	}
	return 0;
}
