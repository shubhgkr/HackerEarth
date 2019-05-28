//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/my-girlfriend-and-her-love-for-cats-1/
#include <iostream>
#include <algorithm>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long n, sum = 0, i;
	std::cin >> n;
	long long s[n], c[n];
	for (i = 0; i < n; i++)
		std::cin >> s[i];
	for (i = 0; i < n; i++)
		std::cin >> c[i];
	std::sort(s, s + n);
	std::sort(c, c + n);
	for (i = 0; i < n; i++)
		sum += (s[i] * c[i]);
	std::cout << sum;
	return 0;
}