//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/
#include<iostream>
#include<algorithm>
#include<string>
int main(){
	std::string s1,s2;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>s1>>s2;
		std::sort(s1.begin(),s1.end());
		std::sort(s2.begin(),s2.end());
		if(s1==s2)
		    std::cout<<"YES\n";
	    	else
		    std::cout<<"NO\n";
	}
	return 0;
}