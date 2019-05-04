//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
#include<iostream>
#include<map>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,x,k,i;
    std::cin>>n;
    std::map<int,int> list;
    for(i=0;i<n;i++){
        std::cin>>x;
        list[x]=i;
    }
    std::cin>>k;
    std::cout<<list[k];
    return 0;
}