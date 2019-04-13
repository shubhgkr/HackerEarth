//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sorting-1-581e9aa0/
#include<iostream>
#include<algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	long long int t,n,i;
	std::cin >> t;
	while (t--){
		std::cin >> n;
		std::pair<long long int, std::pair<long long int, long long int>> arr[n];
		for (i = 0; i < n; i++){
			arr[i].second.first = i;
			std::cin >> arr[i].second.second;
            		arr[i].first=__builtin_popcountll(arr[i].second.second);
		}
        std::sort(arr,arr+n);
        for(i=0;i<n;i++)
            std::cout<<arr[i].second.second<<" ";
        std::cout<<"\n";
	}
	return 0;
}