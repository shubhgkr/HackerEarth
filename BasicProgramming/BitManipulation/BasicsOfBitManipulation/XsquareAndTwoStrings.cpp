//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xsquare-and-two-strings-1/
#include<string>
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T;
	std::string s1,s2;
	std::cin>>T;
	while(T--){
		int a1[26]={0},a2[26]={0};
		std::cin>>s1>>s2;
		std::string ans="No";
		for(char ch:s1)
			a1[ch-'a']++;
		for(char ch:s2)
			a2[ch-'a']++;
		for(int i=0;i<26;i++){
			if(a1[i] && a2[i]){
				ans="Yes";
				break;
			}
		}
		std::cout<<ans<<"\n";
	}
	return 0;
}