//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/jump-out-34/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long n,x,i;
    std::cin>>n;
    for(i=1;i<=n;i++){
        std::cin>>x;
        if(x+i>n)
            break;
    }
    std::cout<<i;
    return 0;
}