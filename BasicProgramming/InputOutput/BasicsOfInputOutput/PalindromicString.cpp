//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
#include<iostream>
#include<string>
int main(){
	std::string s,ans="YES";
	std::getline(std::cin,s);
	int l=s.length();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]){
			ans="NO";
			break;
		}
	}
	std::cout<<ans;
	return 0;
}
