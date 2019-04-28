//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/monk-and-conversion-game-code-monk/
#include<iostream>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t,n,i;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		long long int x,sum=0;
		for(i=0;i<n;i++){
			std::cin>>x;
			sum+=x;
		}
		for(i=0;i<n;i++){
			std::cin>>x;
			sum-=x;
		}
        std::cout<<(sum?"NO\n":"YES\n");
	}
	return 0;
}