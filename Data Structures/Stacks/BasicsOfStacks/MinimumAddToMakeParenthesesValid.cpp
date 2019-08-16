//
// Created by shubhgkr on 16/08/19.
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/minimum-add-to-make-parentheses-valid-9cba6259/

#include <iostream>
#include <stack>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::stack<char> st;
	std::cin >> s;
	int countMin = 0;
	for (char ch:s) {
		if (st.empty()) {
			if (ch == ')' || ch == ']' || ch == '}') {
				countMin++;
			} else {
				st.push(ch);
			}
		} else {
			if (ch == '(' || ch == '[' || ch == '{') {
				st.push(ch);
			} else {
				if ((ch == ')' && st.top() == '(') || (ch == ']' && st.top() == '[') ||
					(ch == '}' && st.top() == '{'))
					st.pop();
				else {
					countMin++;
				}
			}
		}
	}
	std::cout << (countMin + st.size());
	return 0;
}