//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/
#include<iostream>
int main(){
	int x;
	std::cin>>x;
	while(x!=42){
		std::cout<<x<<"\n";
		std::cin>>x;
	}
	return 0;
}
