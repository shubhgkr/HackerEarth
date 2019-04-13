//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sherlock-and-xor/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long int t,n,a,i;
    std::cin>>t;
	while(t--){
		long long int c=0;
	        std::cin>>n;
		for(i=1;i<=n;i++){
	            std::cin>>a;
	            c+=(a&1);
		}
	        std::cout<<(c*(n-c))<<"\n";
	}
    return 0;
}