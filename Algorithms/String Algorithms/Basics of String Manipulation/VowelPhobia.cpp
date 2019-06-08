//
// Created by shubhgkr on 9/6/19.
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/vowels/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::string s;
	std::cin >> t;
	while (t--) {
		std::cin >> s;
		int count = 0;
		for (char c:s)
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				count++;
		std::cout << count << "\n";
	}
	return 0;
}
