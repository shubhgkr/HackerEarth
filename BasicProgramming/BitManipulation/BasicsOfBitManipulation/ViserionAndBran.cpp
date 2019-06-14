//
// Created by shubhgkr on 15/6/19.
//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/viserion-6ef1b663/
#include<iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		long long int ans = 1;
		for (int i = 0; i < s.length() - 1; i++) {
			ans = (ans << 1) % (1000000007);
		}
		std::cout << ans << "\n";
	}
	return 0;
}