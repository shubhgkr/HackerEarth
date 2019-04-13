//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aman-and-his-birthday-gift-b5268b97/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long a,b,c;
    std::cin>>a>>b>>c;
    if((b-a)%c==0 && (b-a)/c>0)
        std::cout<<"YES";
    else
        std::cout<<"NO";
    return 0;
}
