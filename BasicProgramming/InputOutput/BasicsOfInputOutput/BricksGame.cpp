//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/
#include<iostream>
int main(){
	int n,i=1;
	std::cin>>n;
	while(n!=0){
		n-=i;
		if(n<=i){
			std::cout<<"Patlu";
			n=0;
			break;
		}
		if(n<=0){
			n-=(2*i);
			std::cout<<"Motu";
			n=0;
		}
		i+=1;
	}
	return 0;
}