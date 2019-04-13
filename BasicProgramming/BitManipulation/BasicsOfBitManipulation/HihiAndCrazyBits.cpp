//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hihi-and-crazy-bits/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long int T,N,x;
	std::cin>>T;
	while(T--){
		std::cin>>N;
		x=1;
		while(N&x)
			x<<=1;	
		std::cout<<N+x<<"\n";
	}
	return 0;
}