//
// Created by shubhgkr on 17/08/19.
// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/little-monk-and-balanced-parentheses/

#include <iostream>
#include <stack>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int arr[n + 1];
	for (int i = 1; i <= n; i++)
		std::cin >> arr[i];
	std::stack<int> st;
	st.push(0);
	int mx = 0;
	for (int i = 1; i <= n; i++) {
		if (arr[i] > 0)
			st.push(i);
		else {
			int pos = st.top();
			st.pop();
			if (arr[pos] + arr[i] == 0) {
				mx = std::max(mx, i - st.top());
			} else
				st.push(i);
		}
	}
	std::cout << mx;
	return 0;
}