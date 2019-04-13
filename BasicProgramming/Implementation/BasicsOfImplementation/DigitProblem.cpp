//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/digit-problem/
#include<iostream>
#include<string>
int main(){
	long long int X;
	int K,i=0;
	std::cin>>X>>K;
	std::string str=std::to_string(X);
	while(K-- and i!=str.length()){
		if(str[i]!='9')
			str[i]='9';
		else
			K++;
		i++;
	}
	std::cout<<str;
	return 0;
}