//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
#include<iostream>
#include<string>
int main(){
	std::string s;
	int n,k=0;
	getline(std::cin,s);
	std::cin>>n;
	for(char &ch:s){
		if(ch<=57&&ch>=48){
			k=n%10;
			if(ch+k>57)
				ch=ch+k-10;
			else
				ch+=k;
		}
		else if(ch<=90&&ch>=65)
		{
			k=n%26;
			if(ch+k>90)
				ch=ch+k-26;
			else
				ch+=k;
		
		}
		else if(ch<=122&&ch>=97)
		{
			k=n%26;
			if(ch+k>122)
				ch=ch+k-26;
			else
				ch+=k;
		}
	
	}
	std::cout<<s;
	return 0;
}