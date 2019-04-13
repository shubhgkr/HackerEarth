//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/heman-anil-and-soubhik/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t,n;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		int upperLimit=[](int x){
			x--;
            for(int i=1;i<16;i*=2)
    			x|=x>>i;
			return x+1;
		}(n);
		std::cout<<(2*n-upperLimit)<<"\n";
	}
	return 0;
}