//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-castle-gate-july-easy/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T,N,c=0;
	std::cin>>T;
	while(T--){
		c=0;
		std::cin>>N;
		for(int i=1;i<=N;i++){
			for(int j=i+1;j<=N;j++){
				if((i^j)<=N)
					c++;
			}
		}
		std::cout<<c<<"\n";
	}
	return 0;
}