//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/baaki-che/
#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	std::string arrNames[n];
	int arrTime[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arrNames[i];
		std::cin >> arrTime[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arrTime[j] < arrTime[j + 1]) {
				std::swap(arrTime[j], arrTime[j + 1]);
				std::swap(arrNames[j], arrNames[j + 1]);
			}
		}
	}
	std::cout << arrNames[0] << "\n" << arrNames[1] << "\n" << arrNames[2] << "\n";
	return 0;
}