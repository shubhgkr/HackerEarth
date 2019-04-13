//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-his-father/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
	while(t--){
		long long int i;
        std::cin>>i;
        std::cout<<__builtin_popcountll(i)<<"\n";
	}
    return 0;
}