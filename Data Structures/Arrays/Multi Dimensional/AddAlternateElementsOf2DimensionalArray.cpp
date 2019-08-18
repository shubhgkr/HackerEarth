/*
	Created by shubhgkr on 18/08/19.
	https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/add-alternate-elements-of-2-dimensional-array/
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long s1 = 0;
	long s2 = 0;
	int x;
	for (int i = 0; i < 9; i++) {
		std::cin >> x;
		if (i & 1)
			s2 += x;
		else
			s1 += x;
	}
	std::cout << s1 << "\n" << s2;
	return 0;
}