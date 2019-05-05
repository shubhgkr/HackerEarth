//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/repeated-k-times/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,k,x,i;
    std::cin>>n;
    int a[n]={0};
    for(i=0;i<n;i++){
        std::cin>>x;
        a[x]++;
    }
    std::cin>>k;
    for(i=0;i<n;i++)
        if(a[i]==k)
            break;
    std::cout<<i;
    return 0;
}