//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=n-1;i>=2;i--)
		n*=i;
	std::cout<<n;
	return 0;
}
