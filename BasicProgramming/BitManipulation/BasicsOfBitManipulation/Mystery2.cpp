//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-31/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long int N;
	while(std::cin>>N){
		std::cout<<(N&-N)<<"\n";//-N gives 1's compliment of N.
	}
	return 0;
}