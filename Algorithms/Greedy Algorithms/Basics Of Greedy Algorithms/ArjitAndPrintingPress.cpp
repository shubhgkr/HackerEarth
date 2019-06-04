//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/arjit-and-printing-press/
#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t, i, j;
	std::cin >> t;
	while (t--)
	{
		std::string w, r;
		std::cin >> w >> r;
		std::sort(r.begin(), r.end());
		int l1 = w.length(), l2 = r.length();
		for (i = 0, j = 0; i < l1 && j < l2; i++)
			if (w[i] > r[j])
				w[i] = r[j++];
		std::cout << w << "\n";
	}
	return 0;
}