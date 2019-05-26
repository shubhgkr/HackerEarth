//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/subxor-e114a622/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long n, x;
	std::cin >> n >> x;
	while (--n)
	{
		long i;
		std::cin >> i;
		x ^= i;
	}
	if (x)
		std::cout << "1";
	else
		std::cout << "-1";
	return 0;
}