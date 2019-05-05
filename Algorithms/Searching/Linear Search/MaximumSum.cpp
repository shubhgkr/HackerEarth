//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/
#include<iostream>
#include<climits>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,x,count=0,max=INT_MIN;
    long sum=0;
    std::cin>>n;
    while(n--){
        std::cin>>x;
        if(x>max)
            max=x;
        if(x>=0){
            count++;
            sum+=x;
        }
    }
    if(count)
        std::cout<<sum<<" "<<count;
    else
        std::cout<<max<<" 1";
    return 0;
}