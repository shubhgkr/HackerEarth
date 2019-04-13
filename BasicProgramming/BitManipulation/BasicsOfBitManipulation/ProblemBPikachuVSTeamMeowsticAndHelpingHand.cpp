//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/pikachu-loves-or-0c02a270/
#include<iostream>
#include<vector>
int main(){
	int n,k;
	std::cin>>n>>k;
	std::vector<int>x(n),last_set(30,-2147483648),ans(n);
	for(int i=0;i<n;i++)
		std::cin>>x[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<30;j++){
			if((x[i]>>j)&1)
			    last_set[j]=i;
			if(i<=k+last_set[j])
			    ans[i]|=(1<<j);
		}
	}
	for(int i:ans)
	    std::cout<<i<<" ";
}