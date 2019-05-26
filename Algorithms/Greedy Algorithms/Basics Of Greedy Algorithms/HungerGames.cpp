//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/hunger-games/
#include<iostream>
#include<algorithm>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n,i;
	std::cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		std::cin>>a[i];
	std::sort(a,a+n);
	int maxDiff=0,diff=0;
	for(i=0;i<n-2;i++){
		diff=a[i+2]-a[i];
		if(diff>maxDiff)
			maxDiff=diff;
	}
	std::cout<<maxDiff;
	return 0;
}