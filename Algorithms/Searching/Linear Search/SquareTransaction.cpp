//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/square-transaction-20/?utm_source=header&utm_medium=search&utm_campaign=he-search
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int a[t];
	std::cin >> a[0];
	for (int i = 1; i < t; i++) {
		int x;
		std::cin >> x;
		a[i] = x + a[i - 1];
	}
	int q;
	std::cin >> q;
	while (q--) {
		int x;
		std::cin >> x;
		if (x > a[t - 1])
			std::cout << "-1\n";
		else {
			int i = 0;
			while (a[i] < x)
				i++;
			std::cout << (i + 1) << "\n";
		}
	}
	return 0;
}