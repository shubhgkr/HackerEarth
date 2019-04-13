//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/set-and-unset-bits/
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	long long int q,n,i;
	std::vector<long long int> arr;
	std::cin>>q;
	arr.push_back(1);
	for(i=2;arr.size()<627510;i++){
		int count_setBits=__builtin_popcount(i);
		int count_unsetBits=(int)log2(i)+1-count_setBits;
		if(count_unsetBits && std::__gcd(count_setBits,count_unsetBits)==1)
			arr.push_back(i);
	}
	while(q--){
		std::cin>>n;
		std::cout<<arr[n-1]<<"\n";
	}
	return 0;
}