//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/aaryan-subsequences-and-great-xor/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long int n,x,ans=0;
    std::cin>>n;
	while(n--){
		        std::cin>>x;
        ans|=x;
    
	}
    std::cout<<ans<<"\n";
    return 0;
}
