//
// Created by shubhgkr on 16/08/19.
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/super-reduced-strings-303701dd/

#include <iostream>
#include <string>
#include <stack>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::cin >> s;
	std::stack<char> st;
	int i = s.length() - 1;
	while (i >= 0) {
		if (st.empty() || st.top() != s[i])
			st.push(s[i]);
		else
			st.pop();
		i--;
	}
	if (st.empty())
		std::cout << "Empty String";
	else
		while (!st.empty()) {
			std::cout << st.top();
			st.pop();
		}
	return 0;
}