//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hunny-bunny-eebee22a/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T,N;
	std::cin>>T;
	while(T--){
    	long long int sum=0,x;
		std::cin>>N;
		while(N--){
			std::cin>>x;
			if(x>0)
				sum+=x;
		}
		if(sum && !(sum & (sum-1)))
			std::cout<<"Yes\n";
		else
			std::cout<<"No\n";
	}
	return 0;
}