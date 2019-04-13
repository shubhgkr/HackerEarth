//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/let-us-understand-computer-78476e7a/
#include<iostream>
#include<cmath>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long int t,x,i;
    std::cin>>t;
    while(t--){
        std::cin>>x;
        for(i=1;i*i<=x;i<<=1);
        if(x/i>=i/2)
            std::cout<<x-x/i<<"\n";
        else
            std::cout<<x-i/2 + 1<<"\n";
    }
    return 0;
}