//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/
#include<iostream>
#include<string>
int main(){
	std::string s;
	std::cin>>s;
	int t=0;
	for(char ch:s)
		t+=(ch-'a')+1;
	std::cout<<t<<"\n";
	return 0;
}