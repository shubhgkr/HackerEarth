//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/distribution-1-3800e537/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	std::cin>>n;
	int f1=n/3,f2=n>>1,s=0;
	for(int c=0;c<f1;c++)
		for(int b=c+1;b<=f2;b++)
			for(int a=n-b-c;a>b;a--){
				s++;
				break;
			}
	std::cout<<s;
	return 0;
}