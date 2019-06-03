//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/ankur-2/
#include <iostream>
#include <queue>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, x, i, tmp;
	std::cin >> n >> x;
	std::priority_queue<long long int> q;
	long long int val;
	for (i = 0; i < n; i++)
	{
		std::cin >> val;
		if (val)
			q.push(val);
		else
		{
			tmp = x;
			while (tmp-- && !q.empty())
				q.pop();
		}
	}
	long long int price = 0;
	while (!q.empty())
	{
		price += q.top();
		q.pop();
	}
	std::cout << price;
	return 0;
}