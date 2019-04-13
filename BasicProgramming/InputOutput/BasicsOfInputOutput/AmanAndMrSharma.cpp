//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
#include<iostream>
int main(){
	long long int d,r,x;
	std::cin>>d;
	int c=0;
	while(d--){
		std::cin>>r>>x;
		c+=((r*44/7)<=(100*x));
	}
	std::cout<<c<<"\n";
	return 0;
}
