//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-name-if-you-can-61f601ad/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string s;
	std::cin>>s;
	int pos1=s.find_last_of("/\\");
	int pos2=s.find_last_of(".");
	std::cout<<"Path: "<<s.substr(0,pos1+1);
	std::cout<<"\nFile name: "<<s.substr(pos1+1,pos2-pos1-1);
	std::cout<<"\nExtension: "<<s.substr(pos2+1);
	return 0;
}