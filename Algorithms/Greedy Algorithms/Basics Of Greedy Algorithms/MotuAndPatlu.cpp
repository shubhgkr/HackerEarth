//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/motu-and-patlu-1-ab612ad8/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, i, j;
		std::cin >> n;
		long long a[n], s1 = 0, s2 = 0;
		for (i = 0; i < n; i++)
			std::cin >> a[i];
		i = 0;
		j = n - 1;
		if (n == 1)
			std::cout << "1 0\nMotu\n";
		else
		{
			while (i <= j)
			{
				while (s1 <= 2 * s2 && i <= j)
					s1 += a[i++];
				while (s1 > 2 * s2 && j >= i)
					s2 += a[j--];
			}
			long long p, q;
			p = i, q = n - j - 1;
			std::cout << p << " " << q;
			if (p > q)
				std::cout << "\nMotu\n";
			else if (p < q)
				std::cout << "\nPatlu\n";
			else
				std::cout << "\nTie\n";
		}
	}
	return 0;
}