//
// Created by shubhgkr on 10/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/memorise-me/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int x;
	std::cin >> n;
	int b[1001] = {0};
	while (n--) {
		std::cin >> x;
		b[x]++;
	}
	int q;
	std::cin >> q;
	while (q--) {
		std::cin >> x;
		b[x] ? std::cout << b[x] << "\n" : std::cout << "NOT PRESENT\n";
	}
	return 0;
}
