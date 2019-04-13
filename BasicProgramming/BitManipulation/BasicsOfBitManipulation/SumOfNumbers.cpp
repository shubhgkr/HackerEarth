//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sum-of-numbers-9/description/
#include<iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        int n; 
        std::cin>>n; int a[n+5];
        for(int i=0;i<n;i++) 
            std::cin>>a[i];
        int s,i,j; 
        std::cin>>s;
        for(i=0;i<(1<<n);i++){
            int x=0;
            for(j=0;j<n;j++)
                if(i & (1<<j)) x+=a[j];
            if(x==s){
                std::cout<<"YES\n"; break;
            }
        }
        if(i==(1<<n)) 
            std::cout<<"NO\n";
    }
    return 0;
}