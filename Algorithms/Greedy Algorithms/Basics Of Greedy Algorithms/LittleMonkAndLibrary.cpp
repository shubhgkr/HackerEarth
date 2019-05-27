//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/little-monk-and-library/
#include <cstdio>
#include <algorithm>
#define gc getchar_unlocked

/*
getchar_unlocked is not present in iostream but present in cstdio and bits/stdc++.h
use cstdio instead of stdio.h in c++
*/

void scanint(int &x)
{
	register int c = gc();
	x = 0;
	for (; c > 47 && c < 58; c = gc())
	{
		x = (x << 1) + (x << 3) + c - 48;
	}
}
int main()
{
	// std::ios_base::sync_with_stdio(false);
	// std::cin.tie(NULL);
	// std::cout.tie(NULL);
	int n, i;
	scanint(n);
	int b[n], s[n];
	long sum = 0;
	for (i = 0; i < n; i++)
		scanint(b[i]);
	for (i = 0; i < n; i++)
		scanint(s[i]);
	std::sort(b, b + n);
	std::sort(s, s + n);
	for (i = 0; i < n; i++)
		sum += std::abs(s[i] - b[i]);
	// std::cout << sum;
	printf("%ld", sum);
	return 0;
}