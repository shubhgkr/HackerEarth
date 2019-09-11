/*
 * Created by shubhgkr on 11/09/19.
 * https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/tree-queries-45/
 */

#include <iostream>
#include <cmath>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int q;
	std::cin >> n >> q;
	int arr[n];
	int height = std::ceil(std::log2(n + 1));
	std::vector<long long int> levelSum(height, 0);
	for (int i = 0, j = 0; i < n; i++) {
		std::cin >> arr[i];
		levelSum[j] += arr[i];
		j += (std::pow(2, j + 1) == i + 2);
	}
	while (q--) {
		int ch;
		std::cin >> ch;
		if (ch == 1) {
			int x;
			int level;
			std::cin >> x >> level;
			std::cout << arr[int(std::pow(2, level - 1)) + x - 2] << "\n";
		} else if (ch == 2) {
			int l;
			int r;
			std::cin >> l >> r;
			long long int total = 0;
			for (int i = l - 1; i < r; i++)
				total += levelSum[i];
			std::cout << total << "\n";
		} else {
			int x;
			int level;
			int val;
			std::cin >> x >> level >> val;
			levelSum[level - 1] = levelSum[level - 1] - arr[int(std::pow(2, level - 1)) + x - 2] + val;
			arr[int(std::pow(2, level - 1)) + x - 2] = val;
		}
	}

	return 0;
}