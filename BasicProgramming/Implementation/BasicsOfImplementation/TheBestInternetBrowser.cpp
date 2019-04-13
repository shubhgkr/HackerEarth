//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-best-internet-browser-3/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t,c=0,i;
	std::cin>>t;
	while(t--){
		std::string s;
		std::cin>>s;
		for(i=4,c=0;i<s.length()-4;i++){
			char ch=s[i];
			if(!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'))
				c++;
		}
		std::cout<<c+4<<"/"<<s.length()<<"\n";
	}
	return 0;
}