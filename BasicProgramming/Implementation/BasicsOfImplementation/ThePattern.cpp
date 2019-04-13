//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-pattern-c9e759e9/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t,n,m,i;
    char x;
    std::cin>>t;
    while(t--){
        std::cin>>n>>m;
        for(i=0;i<n*m;i++)
            std::cin>>x;
        std::cout<<x<<"\n";
    }
    return 0;
}