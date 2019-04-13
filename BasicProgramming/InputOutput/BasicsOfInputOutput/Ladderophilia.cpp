//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/ladderophilia/
#include<iostream>
#include<string>
int main(){
	int n;
	std::cin>>n;
	std::string s1="*   *",s2="*****",ans="";
	while(n--)
		ans+=s1+"\n"+s1+"\n"+s2+"\n";		
	ans+=s1+"\n"+s1+"\n";		
	std::cout<<ans;
	return 0;
}