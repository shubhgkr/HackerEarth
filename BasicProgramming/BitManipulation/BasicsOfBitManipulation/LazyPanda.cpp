//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lazy-panda-1/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned long long int t,n;
    std::cin>>t;
    while(t--){
        std::cin>>n;
        std::cout<<__builtin_popcountll(n)<<"\n";
    }
    return 0;
}