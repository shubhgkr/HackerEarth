//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
#include<iostream>
int main(){
	long long ans=1,n,x;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>x;
		ans=(ans*x)%1000000007;
	}
	std::cout<<ans;
	return 0;
}