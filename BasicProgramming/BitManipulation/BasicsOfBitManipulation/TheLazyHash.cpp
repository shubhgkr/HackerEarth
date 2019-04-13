//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hash-and-cookies-d35e9dba/description/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int t;
    std::cin>>t;
    long long int n;
    while(t--){
        std::cin>>n;
        std::cout<<__builtin_popcountll(n)<<"\n";
    }
    return 0;
}