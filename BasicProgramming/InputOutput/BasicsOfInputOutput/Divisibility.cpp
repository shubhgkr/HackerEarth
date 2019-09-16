/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/09/19.
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int i;
	while (n--) {
		std::cin >> i;
	}
	if (i % 10 == 0)
		std::cout << "Yes";
	else
		std::cout << "No";
	return 0;
}
