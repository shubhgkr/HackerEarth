//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/special-shop-69904c91/
#include<iostream>
#include<cmath>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        double n,a,b;
        std::cin>>n>>a>>b;
        //use differential equation to differentiate the eqn. and find the min. value of x
        double x=(b*n)/(a+b);
        long long int x1=std::floor(x);
        long long int y1=n-x1;
        long long int x2=std::ceil(x);
        long long int y2=n-x2;
        long long int s1=a*x1*x1+b*y1*y1;
        long long int s2=a*x2*x2+b*y2*y2;
        std::cout<<std::min(s1,s2)<<"\n";
    }
    return 0;
}