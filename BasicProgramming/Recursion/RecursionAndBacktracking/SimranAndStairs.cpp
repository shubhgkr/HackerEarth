//
// Created by shubhgkr on 31/07/19.
//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/simran-and-stairs/

#include<iostream>

int countStairs(int n) {
	if (n <= 1)
		return 1;
	if (n == 2)
		return 2;
	return countStairs(n - 3) + countStairs(n - 2) + countStairs(n - 1);
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	std::cout << countStairs(n);
	return 0;
}