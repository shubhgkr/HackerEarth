/*
	Created by shubhgkr on 25/08/19.
	https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charges-repel/
*/

#include <iostream>
#include <stack>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string s;
	std::stack<char> st;
	int n;
	std::cin >> n;
	std::cin >> s;
	for (char ch:s) {
		if (st.empty())
			st.push(ch);
		else if (st.top() == ch)
			st.pop();
		else
			st.push(ch);
	}
	s = "";
	while (!st.empty()) {
		s = st.top() + s;
		st.pop();
	}
	std::cout << s.length() << "\n" << s;
	return 0;
}