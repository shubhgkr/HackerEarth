//
// Created by shubhgkr on 13/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/name-game-3/
#include<iostream>
#include<string>

int main() {
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n, l = 0;
		std::cin >> n;
		std::string str;
		std::cin >> str;
		int count1[12] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
		for (int j = 0; j < n; j++) {
			int count2[12];
			for (int k = 0; k < 12; k++)
				count2[k] = count1[k] - str[j];
			int min = abs(count2[0]);
			for (int k : count2) {
				if (abs(k) < min)
					min = abs(k);
			}
			for (int k : count2) {
				if (abs(k) == min) {
					str[j] += k;
					break;
				}
			}
		}
		std::cout << str << "\n";
	}
	return 0;
}