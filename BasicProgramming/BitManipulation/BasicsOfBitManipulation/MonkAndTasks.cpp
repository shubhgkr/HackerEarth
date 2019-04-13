//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-tasks/
#include<iostream>
#include<vector>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	long long int n,i,j;
	std::cin>>t;
	while(t--){
		std::vector<long long int> arr,count;
		std::cin>>n;
		long long int x;
		for(i=0;i<n;i++){
			std::cin>>x;
			arr.push_back(x);
			count.push_back(__builtin_popcountll(x));
		}
		for(j=1;j<=60;j++)
			for(i=0;i<n;i++)
				if(count[i]==j)
					std::cout<<arr[i]<<" ";
		std::cout<<"\n";
	}
	return 0;
}