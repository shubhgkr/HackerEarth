//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include <iostream>
#include <algorithm>
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
		int a[n], i;
		for (i = 0; i < n; i++)
			std::cin >> a[i];
		std::sort(a, a + n);
		long min = 0;
		for (i = 0; i < n; i++)
		{
			a[i] += min;
			if (a[i] < k)
				min += (k - a[i]);
			else
				break;
		}
		std::cout << min << "\n";
	}
	return 0;
}