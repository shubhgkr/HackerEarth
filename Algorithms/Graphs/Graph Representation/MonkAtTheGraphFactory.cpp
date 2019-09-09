/*
	Created by shubhgkr on 09/09/19.
	https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-at-the-graph-factory/
*/

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int x;
	int total = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> x;
		total += x;
	}
	/*
	 * Used the property that sum of all the degrees of a tree will be equal to twice of the number of edges in a tree.
	 * https://math.stackexchange.com/questions/1746743/prove-that-trees-have-at-least-two-vertices-of-degree-one
	 * */
	std::cout << (2 * (n - 1) == total ? "Yes" : "No");
	return 0;
}