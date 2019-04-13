//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-6/
#include<iostream>
#include<string>
int main(){
	int n,s;
	std::cin>>n;
	while(n--){
		std::string word="*";
		std::cin>>s;
		for(int i=1;i<=s;i++){
			for(int k=1;k<=s-i;k++)
				std::cout<<" ";
			std::cout<<word<<"\n";
			word+="**";
		}
	}
	return 0;
}
