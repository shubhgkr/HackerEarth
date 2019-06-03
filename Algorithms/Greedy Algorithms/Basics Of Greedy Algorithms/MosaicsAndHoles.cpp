//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/filip-kotinioo-39795217/
#include <iostream>
const int maxn = 1000 + 10;
bool b[maxn][maxn];
bool ps[maxn][maxn];
bool ar[maxn][maxn];
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, m, k;
	std::cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			std::cin >> b[i][j];
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			ps[i][j] = ps[i - 1][j - 1] ^ ps[i][j] ^ ps[i - 1][j] ^ ps[i][j - 1];
			if (ps[i][j] == b[i][j])
			{
				if (i + k > n + 1 || j + k > m + 1)
				{
					std::cout << "-1\n";
					return 0;
				}
				ps[i][j] ^= 1;
				ps[i + k][j] ^= 1;
				ps[i][j + k] ^= 1;
				ps[i + k][j + k] ^= 1;
				count++;
			}
		}
	}
	std::cout << count;
	return 0;
}