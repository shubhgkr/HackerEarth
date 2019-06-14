//
// Created by shubhgkr on 15/6/19.
//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pepper-and-palindromic-love-76ae8763/
#include<iostream>
#include<string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int a[10] = {0};
		for (char ch:s)
			a[ch - '0']++;
		int mx = 0;
		for (int i = 1; i < 10; i++)
			if (a[i] > a[mx])
				mx = i;
		std::cout << mx << "\n";
	}
	return 0;
}