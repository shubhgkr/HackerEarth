//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-his-friend/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T;
	std::cin>>T;
	long long int M,P;
	while(T--){
		std::cin>>M>>P;
		M=M^P;
		std::cout<<__builtin_popcountll(M)<<"\n";
	}
	return 0;
}