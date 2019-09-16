/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-reversed-numbers/description/
 */

#include<iostream>
#include<string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a;
		int b;
		std::cin >> a >> b;
		std::string n1 = std::to_string(a);
		std::reverse(n1.begin(), n1.end());
		a = std::stoi(n1);
		std::string n2 = std::to_string(b);
		std::reverse(n2.begin(), n2.end());
		b = std::stoi(n2);
		int sum = a + b;
		std::string n = std::to_string(sum);
		std::reverse(n.begin(), n.end());
		sum = std::stoi(n);
		std::cout << sum << "\n";
	}
	return 0;
}
