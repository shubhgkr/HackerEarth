//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/
#include<iostream>
int main(){
	int n,sh,sm,eh,em;
	std::cin>>n;
	while(n--){
		std::cin>>sh>>sm>>eh>>em;
		int m1=sh*60+sm;
		int m2=eh*60+em;
		std::cout<<(m2-m1)/60<<" "<<(m2-m1)%60<<"\n";
	}
	return 0;
}
