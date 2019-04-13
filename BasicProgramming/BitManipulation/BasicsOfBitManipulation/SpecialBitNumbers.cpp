//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/chakra-numbers-9c9e0faf/
#include<iostream>
#include<vector>
int isSpecial(int n){
	while(n){
		if(n&1 and (n>>1)&1)
			return 1;
		n>>=1;
	}
	return 0;
}
int main(){
	int n,q,l,r;
	std::vector<long long int> arr;
	arr.push_back(0);
	std::cin>>n>>q;
	for(int i=0;i<n;i++){
		long long int x;
		std::cin>>x;
		arr.push_back(isSpecial(x)+arr[i]);
	}
	while(q--){
		std::cin>>l>>r;
		std::cout<<(arr[r]-arr[l-1])<<"\n";
	}
	return 0;
}