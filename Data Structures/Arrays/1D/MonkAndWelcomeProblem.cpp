//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/
#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, i;
	std::cin >> n;
	int a[n], b[n];
	for (i = 0; i < n; i++)
		std::cin >> a[i];
	for (i = 0; i < n; i++)
		std::cin >> b[i];
	for (i = 0; i < n; i++)
		std::cout << (a[i] + b[i]) << " ";
	return 0;
}