//
// Created by shubhgkr on 31/07/19.
//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/a-tryst-with-chess/

#include<iostream>

int arr[10][10];

int find(int r, int c, int n) {
	int temp = 0;
	if (n == 0)
		return 0;
	if (r < 0 || r > 9 || c < 0 || c > 9)
		return 0;
	if (arr[r][c] == 1 && n == 1)
		return 0;
	if (n == 1) {
		temp = 1;
		arr[r][c] = 1;
	}
	return temp + find(r - 2, c - 1, n - 1) + find(r - 2, c + 1, n - 1) + find(r - 1, c + 2, n - 1) +
		   find(r + 1, c + 2, n - 1) + find(r + 2, c + 1, n - 1) + find(r + 2, c - 1, n - 1) +
		   find(r + 1, c - 2, n - 1) + find(r - 1, c - 2, n - 1);
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int x, y, n;
	std::cin >> x >> y >> n;
	std::cout << find(x - 1, y - 1, n + 1);
	return 0;
}