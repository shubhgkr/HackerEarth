//https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/prime-ministers-number/
#include<iostream>
bool isPrime(int n){
	if(n==2 || n==3)
		return true;
	if(!(n&1))
		return false;
	if(n%3==0)
		return false;
	int i=5,w=2;
	while(i*i<=n){
		if(n%i==0)
			return false;
		i+=w;
		w=6-w;
	}
	return true;
}
int getSum(int n){
	int sum=0;
	while(n!=0){
		sum+=(n%10);
		n/=10;
	}
	return sum;
}
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int a,b;
	std::cin>>a>>b;
	while(a<=b){
		if(isPrime(getSum(a)) && isPrime(a))
			std::cout<<(a)<<" ";
		a++;
	}
	return 0;
}
