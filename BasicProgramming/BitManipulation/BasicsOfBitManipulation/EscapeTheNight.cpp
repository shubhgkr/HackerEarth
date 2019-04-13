//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/escape-the-night/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long t;
    std::cin>>t;
    while(t--){
        long long int n,i,j,s=0;
        std::cin>>n;
        for(i=1;i<=n;i*=2)
            for(j=2*i;(i+j)<=n;j*=2)
                s=(s+i+j)%1000000007;
        std::cout<<s<<"\n";
    }
    return 0;
}