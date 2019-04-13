//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/
#include<string>
#include<iostream>
int main(){
	std::string s;
	std::cin>>s;
 	std::regex re("0{6}|1{6}");
	std::sregex_iterator now(s.begin(),s.end(),re),lt;
	if(now!=lt)
		std::cout<<"Sorry, sorry!";
	else
		std::cout<<"Good luck!";
	return 0;
}
