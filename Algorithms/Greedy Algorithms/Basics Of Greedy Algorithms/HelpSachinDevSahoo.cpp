//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/minimum-flips/
#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string s;
		int k, c = 0;
		std::cin >> s >> k;
		for (int i = 0; i <= s.length() - k; i++)
		{
			if (s[i] == '0')
			{
				c++;
				for (int j = 0; j < k; j++)
				{
					if (s[i + j] == '0')
						s[i + j] = '1';
					else
						s[i + j] = '0';
				}
			}
		}
		if (std::count(s.begin(), s.end(), '0'))
			c = -1;
		std::cout << c << "\n";
	}
	return 0;
}