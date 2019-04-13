//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-new-experiment/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int T;
    long y;
    std::cin>>T;
	while(T --){
		std::cin>>y;
        std::cout<<__builtin_popcount(y)<<"\n";
	}
    return 0;
}