/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/10/19.
 * Problem link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int length;
	int pages;
	std::cin >> length >> pages;
	if (length <= 23 && 500 <= pages && pages <= 1000)
		std::cout << "Take Medicine";
	else
		std::cout << "Don't take Medicine";
	return 0;
}
