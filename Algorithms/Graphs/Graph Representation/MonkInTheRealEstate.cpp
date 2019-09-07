/*
	Created by shubhgkr on 07/09/19.
	https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-in-the-real-estate/
*/

#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::unordered_set<int> st;
		int e;
		std::cin >> e;
		int x, y;
		while (e--) {
			std::cin >> x >> y;
			st.insert(x);
			st.insert(y);
		}
		std::cout << st.size() << "\n";
	}
	return 0;
}