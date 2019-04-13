//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/chinu-and-his-project/description/
#include<iostream>
#include<cmath>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long int x,n;
    std::cin>>n;
    x=std::log2(n);
    if(n)
        while(x--)
            n=n^(n/2&(1<<x));
    std::cout<<n<<std::endl;
    return 0;
}