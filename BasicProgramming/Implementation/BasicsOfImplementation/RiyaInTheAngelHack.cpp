//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/dummy1-1/description/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long n;
    std::cin>>n;
    int x=n%10;
    bool test5=(x==0 || x==5),test3=(n%3==0);
    if(test3 && test5)
        std::cout<<"AngelHack!";
    else if(test3)
        std::cout<<"Angel";
    else if(test5)
        std::cout<<"Hack";
    else
        std::cout<<n;
    return 0;
}