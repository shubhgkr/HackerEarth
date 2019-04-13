//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/similarity/
#include<iostream>
#include<string>
#include<cmath>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::string s1,s2;
	std::cin>>t;
	while(t--){
		int c=0;
		std::cin>>s1>>s2;
		int cnt[1000]={0};
		for(char ch:s1)
			cnt[ch]++;
		for(char ch:s2)
			cnt[ch]--;
		for(int count:cnt)
			c+=std::abs(count);
		std::cout<<c<<"\n";
	}
	return 0;
}