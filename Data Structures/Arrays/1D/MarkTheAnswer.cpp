//
// Created by shubhgkr on 10/6/19.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int x;
	int a;
	int count = 0;
	bool flag = false;
	std::cin >> n >> x;
	while (n--) {
		std::cin >> a;
		if (a <= x) {
			count++;
		} else {
			if (flag)
				break;
			flag = true;
		}
	}
	std::cout << count;
	return 0;
}
