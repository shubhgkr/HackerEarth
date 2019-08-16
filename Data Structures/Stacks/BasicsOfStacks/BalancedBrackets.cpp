//
// Created by shubhgkr on 16/08/19.
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/

#include <iostream>
#include <stack>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	while (n--) {
		std::string s;
		std::stack<char> st;
		std::cin >> s;
		bool flag = true;
		for (char ch:s) {
			if (st.empty()) {
				if (ch == ')' || ch == ']' || ch == '}') {
					flag = false;
					break;
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
						flag = false;
						break;
					}
				}
			}
		}
		if (flag && st.empty())
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}