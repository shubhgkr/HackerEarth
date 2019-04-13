//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/power-of-2-6/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long N,c=0;
	long long int x;
	std::cin>>N;
	while(N--){
		std::cin>>x;
		if(x&&!(x&(x-1)))
			c++;
	}
	std::cout<<c<<"\n";
	return 0;
}
