//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/complete-string-4/
#include<iostream>
#include<string>
#include<set>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	std::cin>>n;
	while(n--){
		std::string s;
		std::cin>>s;
		std::set<char> st(s.begin(),s.end());
		if(st.size()==26)
			std::cout<<"YES\n";
		else
			std::cout<<"NO\n";
	}
	return 0;
}