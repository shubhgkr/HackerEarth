//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/play-with-numbers-2/
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#include<iostream>
#include<vector>
#include<numeric>
int main(){
	int N,Q,L,R;
	std::cin>>N>>Q;
	std::vector<int> arr;
	arr.push_back(0);
	for(int i=0;i<N;i++){
		int x;
		std::cin>>x;
		arr.push_back(x+arr[i]);
	}
	while(Q--){
		std::cin>>L>>R;
		std::cout<<(arr[R] - arr[L-1])/(R-L+1)<<"\n";
	}
	return 0;
}


