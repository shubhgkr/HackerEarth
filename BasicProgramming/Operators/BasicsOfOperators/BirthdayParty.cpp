//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/
#include<iostream>
int main()
{
    int T,N,M;
    std::cin>>T;
    while(T--)
    {
        std::cin>>N>>M;
        if(M%N)
            std::cout<<"\nNo";
        else
            std::cout<<"\nYes";
    }
}