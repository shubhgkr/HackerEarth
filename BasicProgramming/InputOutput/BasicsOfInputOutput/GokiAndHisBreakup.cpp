//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/
#include<iostream>
int main(){
	int n,x,y;
	std::cin>>n>>x;
	for(int i=0;i<n;i++){
		std::cin>>y;
		if(y>=x)
			std::cout<<"YES\n";
		else
			std::cout<<"NO\n";
	}	
	return 0;
}