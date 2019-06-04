//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/division-of-salary-e495efbb/description/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, i;
	std::cin >> n;
	long long a[n], b[n], ans = 0;
	for (i = 0; i < n; i++)
		std::cin >> a[i] >> b[i];
	for (i = n - 1; i >= 0; i--)
	{
		if ((ans + a[i]) % b[i])
		{
			ans += (b[i] - ((ans + a[i]) % b[i]));
		}
	}
	std::cout << ans;
	return 0;
}