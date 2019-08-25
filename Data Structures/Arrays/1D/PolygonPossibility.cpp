/*
	Created by shubhgkr on 25/08/19.
	https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/polygon-possible/
*/

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
			sum += arr[i];
		}
		int mx = *std::max_element(arr, arr + n);
		std::cout << (sum - mx > mx ? "Yes\n" : "No\n");
	}
	return 0;
}