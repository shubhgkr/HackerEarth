//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-30/
#include<iostream>
#include<bitset>
#include<climits>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long int N;
	while(std::cin>>N){
		std::bitset<sizeof(size_t) * CHAR_BIT> b(N);
		std::cout<<b.count()<<"\n";
	}
	return 0;
}