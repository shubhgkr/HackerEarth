//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/
#include<iostream>
#include<string>
int main(){
	int n;
	std::cin>>n;
	std::string a,b,s;
	while(n--){
		std::cin>>a>>b;
		int c1[26]={0},c2[26]={0};
		for(char c:a)
		    c1[c-'a']++;
		for(char c:b)
		    c2[c-'a']++;
		int count=0;
	        for(int i=0;i<26;i++)
        	    count+=abs(c1[i]-c2[i]);
		std::cout<<count<<"\n";	
	}
	return 0;
}