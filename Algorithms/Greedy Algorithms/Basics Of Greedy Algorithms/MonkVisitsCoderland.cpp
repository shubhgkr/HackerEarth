//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/monk-visits-coderland-4/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t, n, minCost = 0, i;
	long long int sum = 0, totalLitre = 0;
	std::cin >> t;
	while (t--)
	{
		std::cin >> n;
		int C[n], L[n];
		for (i = 0; i < n; i++)
			std::cin >> C[i];
		for (i = 0; i < n; i++)
			std::cin >> L[i];
		minCost = C[0];
		totalLitre = L[0];
		for (i = 1, sum = 0; i < n; i++)
		{
			if (C[i] < minCost)
			{
				sum += (totalLitre * minCost);
				totalLitre = 0;
				minCost = C[i];
			}
			totalLitre += L[i];
		}
		sum += (totalLitre * minCost);
		std::cout << sum << "\n";
	}
	return 0;
}