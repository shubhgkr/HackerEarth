/*
	Created by shubhgkr on 23/08/19.
 	https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/2-arrays-90c9019c/
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int a[n];
	int b[n];
	long long int s1 = 0;
	long long int s2 = 0;
	bool flag1 = false;
	bool flag2 = false;
	int c = 0;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		std::cin >> b[i];
	for (int i = 0; i < n; i++) {
		if (a[i] == -1) {
			c++;
			flag1 = true;
		} else
			s1 += a[i];
		if (b[i] == -1) {
			c++;
			flag2 = true;
		} else
			s2 += b[i];
	}
	if (flag1 && flag2) {
		std::cout << "Infinite";
	} else {
		long long int diff = (flag1 ? (s2 - s1) : (s1 - s2));
		if (c == 1) {
			if (diff >= 0)
				std::cout << "1";
			else
				std::cout << "0";
		} else {
			if (diff >= 0)
				std::cout << (diff + 1);
			else
				std::cout << "0";
		}
	}
	return 0;
}