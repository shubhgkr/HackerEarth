//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monks-choice-of-numbers-1/
#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t,n,k;
    std::cin>>t;
	while(t--){
		std::cin>>n>>k;
        std::vector<long> count;
		for(int j=0;j<n;j++){
			long i;
            std::cin>>i;
            count.push_back(__builtin_popcountll(i));
		}
        std::sort(count.begin(),count.end());
        long long int s=0;
        for(int j=n-k;j<n;j++)
            s+=count[j];
        std::cout<<s<<"\n";
	}
    return 0;
}
