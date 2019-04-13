//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/what-is-the-string-made-of-2/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string s;
	std::cin>>s;
	int c=0,cnt[10]={6,2,5,5,4,5,6,3,7,6};
	for(char ch:s)
		c+=cnt[ch-'0'];
	std::cout<<c;
	return 0;
}