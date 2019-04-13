//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/max-profit-7/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long n,i,j,ans=0;
    std::cin>>n;
    long a[n];
    for(i=0;i<n;i++)
        std::cin>>a[i];
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]-a[j]>ans)
                ans=a[i]-a[j];
        }
    }
    std::cout<<ans;
    return 0;
}