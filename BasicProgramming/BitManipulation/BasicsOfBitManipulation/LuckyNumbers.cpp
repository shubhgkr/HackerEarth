//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lucky-numbers-20/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long T;
	std::cin>>T;
	long long int N;
	while(T--){
		long long int i,j,sum=0;
		std::cin>>N;
        for(i=1;i<=N;i*=2){
            for(j=2*i;(i+j)<=N;j*=2){
                sum=(sum+i+j)%1000000007;
            }
        }
		std::cout<<sum<<"\n";
	}
	return 0;
}