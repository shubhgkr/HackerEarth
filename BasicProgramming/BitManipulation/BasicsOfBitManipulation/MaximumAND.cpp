//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/maximum-and/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
	while(t--){
		long long int a,b,result;
        std::cin>>a>>b;
        result=b-2+(b&1);
        if(result>=a)
            std::cout<<result<<"\n";
        else
            std::cout<<(a&b)<<"\n";
	}
    return 0;
}
