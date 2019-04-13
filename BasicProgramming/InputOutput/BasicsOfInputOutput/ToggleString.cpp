//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

#include<iostream>
#include<string>
int main(){
	std::string s;
	std::cin>>s;
	for(char &ch:s){
		if(ch>='A' && ch<='Z')
			ch=ch-'A'+'a';
		else
			ch=ch-'a'+'A';
	}
	std::cout<<s;
	return 0;
}