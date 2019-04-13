//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-2/
#include<iostream>
int main(){
	long long int n,mn,mx,x;
	std::cin>>n>>mn>>mx;
	bool flag=true;
	while(n--){
		std::cin>>x;
		if(mn>x || x>mx)
			flag=false;
	}
	if(flag)
		std::cout<<"YES";
	else
		std::cout<<"NO";
	return 0;
}
