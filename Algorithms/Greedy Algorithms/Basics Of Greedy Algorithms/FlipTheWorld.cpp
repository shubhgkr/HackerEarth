//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/flip-the-world/description/
#include <iostream>
#include <string>
void tog(bool *a, int j)
{
	for (int c = j; c >= 0; c--)
		a[c] = !a[c];
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n, m, i, j, count = 0;
		std::cin >> n >> m;
		bool a[n][m];
		std::string s;
		for (i = 0; i < n; i++)
		{
			std::cin >> s;
			for (j = 0; j < m; j++)
				a[i][j] = s[j] - '0';
		}
		for (i = n - 1; i >= 0; i--)
		{
			for (j = m - 1; j >= 0; j--)
			{
				if (!a[i][j])
				{
					count++;
					for (int k = i; k >= 0; k--)
						tog(a[k], j);
				}
			}
		}
		std::cout << count << "\n";
	}
	return 0;
}