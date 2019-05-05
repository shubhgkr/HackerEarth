//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    long x,sum=0,min=-1,max=-1;
    std::cin>>n;
    while(n--){
        std::cin>>x;
        sum+=x;
        if(min==-1 || x<min)
            min=x;
        if(x>max)
            max=x;
    }
    std::cout<<(sum-max)<<" "<<(sum-min);
    return 0;
}