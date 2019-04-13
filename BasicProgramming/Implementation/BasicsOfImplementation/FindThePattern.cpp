//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-pattern-6/
#include<iostream>
int main(){
	long long int n,x,mn=0,mx=0;
	std::cin>>n;
	for(int i=1;i<=n;i++){
		std::cin>>x;
		if(i==1 || x<mn)
			mn=x;
		if(i==1 ||x>mx)
			mx=x;
	}
	std::cout<<(mx+mn);
	return 0;
}