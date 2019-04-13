//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/counting-rr/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string s;
	std::cin>>s;
	long c=0;
	size_t nPos=s.find("rr",0);
	while(nPos!=std::string::npos){
		c++;
		nPos=s.find("rr",nPos+1);
	}
	std::cout<<c;
	return 0;
}