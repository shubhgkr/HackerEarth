//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);	
	std::string s;
	getline(std::cin,s);
	int x=0,y=0;
	for(char c:s){
		x+=(c=='R')-(c=='L');
		y+=(c=='U')-(c=='D');
	}
	std::cout<<x<<" "<<y;
	return 0;
}