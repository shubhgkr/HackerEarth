//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/
#include<iostream>
#include<string>
int main(){
	std::string s;
	std::cin>>s;
	bool flag=true;
	if((s[0]+s[1])&1||s[2]=='A' || s[2]=='E' || s[2]=='I' ||s[2]=='O' || s[2]=='U' || s[2]=='Y' || (s[3]+s[4])&1 ||(s[4]+s[5])&1 || (s[7]+s[8])&1)
		std::cout<<"invalid\n";
	else
		std::cout<<"valid\n";
	return 0;
}
