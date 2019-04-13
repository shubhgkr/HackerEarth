//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/
#include<iostream>
#include<string>
int main(){
	long long int n;
	int s;
	std::cin>>n;
	std::string num=std::to_string(n);
	if(num.length()!=10)
	    std::cout<<"Illegal ISBN";
	else{
    	while(n){
	    	s+=(n%10);
		    n/=10;
	    }
	    if(!(n%11))
		    std::cout<<"Legal ISBN";
	    else
		    std::cout<<"Illegal ISBN";
	}
	return 0;
}