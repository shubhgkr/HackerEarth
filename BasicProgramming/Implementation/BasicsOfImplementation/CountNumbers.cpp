//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-numbers-47/
#include<regex>
#include<string>
#include<iostream>
int main(){
	int t;
	std::cin>>t;
	std::regex re("[\\d]*");
	while(t--){
		int l,c=0;
		std::cin>>l;
		std::string s;
		std::cin>>s;
		std::sregex_iterator now(s.begin(),s.end(),re),lt;
		while(now!=lt){
			std::smatch mt=*now;
			if(mt.str()!="")
				c+=1;
			now++;
		}
		std::cout<<c<<"\n";
	}
	return 0;
}