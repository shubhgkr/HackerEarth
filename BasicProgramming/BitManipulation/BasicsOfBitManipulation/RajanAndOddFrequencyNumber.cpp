//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/danny-and-his-loneliness/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n,c=0,x;
	std::cin>>n;
	n=2*n+1;
	while(n--){
		std::cin>>x;
		c=c^x;
	}
	std::cout<<c;
	return 0;
}
