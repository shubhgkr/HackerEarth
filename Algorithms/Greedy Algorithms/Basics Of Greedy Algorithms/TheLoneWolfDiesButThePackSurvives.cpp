//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/c-32/
#include <iostream>
#include <algorithm>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long n, y, d;
	std::cin >> n >> d >> y;
	long long a[n], i, mx = 0;
	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
		mx = std::max(mx, a[i]);
	}
	long long x = mx + (d - 1) * y;
	std::cout << x / d + (x % d != 0);
	return 0;
}