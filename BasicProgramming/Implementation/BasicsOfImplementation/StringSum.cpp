//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/
#include<iostream>
#include<string>
int main(){
	std::string str;
	std::cin>>str;
	int s=0;
	for(char ch:str)
		s+=(ch-'a')+1;
	std::cout<<s;
	return 0;
}
