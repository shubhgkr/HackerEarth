//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/swap-it-2/
/* 
solved with the help of this.
https://www.geeksforgeeks.org/lexicographically-smallest-array-k-consecutive-swaps/
 */
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, k;
		std::cin >> n >> k;
		int a[n], i, j, pos;
		for (i = 0; i < n; i++)
			std::cin >> a[i];
		for (i = 0; i < n - 1 && k; i++)
		{
			pos = i;
			for (j = i + 1; j < n; j++)
			{
				if (j - i > k)
					break;
				if (a[j] < a[pos])
					pos = j;
			}
			for (j = pos; j > i; j--)
				std::swap(a[j], a[j - 1]);
			k -= pos - i;
		}
		for (i = 0; i < n; i++)
			std::cout << a[i] << " ";
		std::cout << "\n";
	}
	return 0;
}