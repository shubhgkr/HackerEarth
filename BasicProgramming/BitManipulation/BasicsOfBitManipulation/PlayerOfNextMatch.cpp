//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/ankits-no-ed95054d/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T;
	std::cin>>T;
	while(T--){
		long long sum=0;
		long N,x;
		std::cin>>N;
		while(N--){
			std::cin>>x;
			sum+=(x&(-x));
		}
		std::cout<<sum<<"\n";
	}
	return 0;
}
