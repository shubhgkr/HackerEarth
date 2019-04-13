//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-98/
#include<iostream>
#include<vector>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n,q,l,r;
	std::vector<long long int> arr;
	std::cin>>n>>q;
	for(int i=0;i<n;i++){
		long x;
		std::cin>>x;
		arr.push_back(x+arr[i]);
	}
	while(q--){
		long long int x;
		std::cin>>l>>r>>x;
		std::cout<<((arr[r]-arr[l-1])^x)<<"\n";
	}
	return 0;
}
