//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/
#include<iostream>
int main(){
	long long int n,x,sum[]={0,0,0};
	std::cin>>n;
	for(int i=1;i<=n;i++){
		std::cin>>x;
		sum[i%3]+=x;
	}
	std::cout<<sum[1]<<" "<<sum[2]<<" "<<sum[0]<<"\n";
	return 0;
}