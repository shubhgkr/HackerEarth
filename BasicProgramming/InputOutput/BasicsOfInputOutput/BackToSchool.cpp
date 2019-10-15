/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/10/19.
 * Problem link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;
	std::cout << std::max(a, std::max(b, c));
	return 0;
}
