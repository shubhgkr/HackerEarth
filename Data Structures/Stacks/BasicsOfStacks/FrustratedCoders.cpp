//
// Created by shubhgkr on 16/08/19.
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/sniper-shooting/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int arr[1001] = {0};
	int x;
	while (n--) {
		std::cin >> x;
		arr[x]++;
	}
	int total = 0, bullet = 0;
	for (int i = 1000; i > 0; --i) {
		if (arr[i] && bullet < arr[i]) {
			total += ((arr[i] - bullet) * i);
			bullet = arr[i];
		}
	}
	std::cout << total;
	return 0;
}