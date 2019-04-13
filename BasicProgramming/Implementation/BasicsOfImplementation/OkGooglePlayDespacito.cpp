//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/play-despacito/
#include<iostream>
#include<cmath>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int l,d;
    std::cin>>l>>d;
    std::cout<<std::ceil(d/(l*0.5));
    return 0;
}