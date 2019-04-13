//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

#include<iostream>
int main(){
	int l,r,k;
	std::cin>>l>>r>>k;
	std::cout<<((r-l)/k)+(l%k==0);
	return 0;
}