//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/sharpen-the-pencils-2/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		if (n == 1)
			std::cout << "1 0\n";
		else {
			int i = 0;
			int j = n - 1;
			long long s1 = 0, s2 = 0;
			while (i <= j) {
				while (s1 <= 2 * s2 && i <= j)
					s1 += a[i++];
				while (s1 > 2 * s2 && j >= i)
					s2 += a[j--];
			}
			std::cout << i << " " << (n - j - 1) << "\n";
		}
	}
	return 0;
}
