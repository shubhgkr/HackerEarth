//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/unit-existence/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    long long int n,x,ans=0;
    std::cin>>t;
    while(t--){
        ans=0;
        std::cin>>n;
        while(n--){
            std::cin>>x;
            ans^=x;
        }
        if(!ans)
            ans=-1;
        std::cout<<ans<<"\n";
    }
    return 0;
}