//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-95/
#include<iostream>
#include<cmath>
long long int invertBits(long long int n){
    long long int x= log2(n)+1;
    for(long long int i=0;i<x;i++)
        n=n^(1<<i);
    return n;
}
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long int a;
    std::cin>>a;
    std::cout<<a<<" "<<invertBits(a);
}