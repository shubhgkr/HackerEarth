//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/dorsplen/
#include<iostream>
#include<algorithm>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long int a[3],t1;
	std::cin>>a[0]>>a[1]>>a[2];
	std::sort(a,a+3);
	t1=a[2]-a[1];
	std::cout<<a[1]+(t1>>1)+(t1&1);
	return 0;
}