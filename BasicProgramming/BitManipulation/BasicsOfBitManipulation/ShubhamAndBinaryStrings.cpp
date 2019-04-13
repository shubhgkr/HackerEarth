//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subham-and-binary-strings/
#include<iostream>
#include<string>
#include<algorithm>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N,len;
	std::cin>>N;
	std::string str;
	while(N--){
		std::cin>>len>>str;
	std::cout<<std::count(str.begin(),str.end(),'0')<<"\n";
	}
	return 0;
}
