//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/easy-multiple/
#include<iostream>
#include<cmath>
long long int sum(long long int n,int k){
	long long int d=std::floor((n-1)/k);
	return k*(d*(d+1))/2;
}
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long int t,n;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		std::cout<<sum(n,3)+sum(n,5)-sum(n,15)<<"\n";
	}
	return 0;
}