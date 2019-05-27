//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/bob-and-walls/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		int a[n], i;
		for (i = 0; i < n; i++)
			std::cin >> a[i];
		int mx = a[0], cnt = 1;
		for (i = 1; i < n; i++)
			if (a[i] > mx)
			{
				cnt++;
				mx = a[i];
			}
		std::cout << cnt;
	}
	return 0;
}