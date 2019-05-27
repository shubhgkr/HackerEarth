//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, q, i;
	std::cin >> n >> q;
	bool a[n], option;
	for (i = 0; i < n; i++)
		std::cin >> a[i];
	while (q--)
	{
		std::cin >> option;
		if (option)
		{
			int x;
			std::cin >> x;
			x--;
			a[x] = !a[x];
		}
		else
		{
			int l, r;
			std::cin >> l >> r;
			if (a[--r])
				std::cout << "ODD\n";
			else
				std::cout << "EVEN\n";
		}
	}
	return 0;
}