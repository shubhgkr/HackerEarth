//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/toy-box-5044b3ed/
#include <iostream>
#include <numeric>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, m;
	std::cin >> n >> m;
	int b[m] = {0}, p, i, x;
	for (i = 0; i < n; i++)
	{
		std::cin >> p >> x;
		b[x - 1] = std::max(b[x - 1], p);
	}
	std::cout << std::accumulate(b, b + m, 0);
}