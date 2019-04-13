//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-the-box-of-cookies/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t,n,ans,max=0,cnt=0,i,j;
    std::cin>>t;
	while(t--){
		max=cnt=0;
        std::cin>>n;
        long arr[n];
        for(i=0;i<n;i++)
            std::cin>>arr[i];
		for(i=0;i<32;i++){
			cnt=0;
            for(j=0;j<n;j++)
                if(arr[j] & (1<<i))
                    cnt++;
			if(cnt>max){
				max=cnt;
                ans=i;
			}
		}
        std::cout<<ans<<"\n";
	}
    return 0;
}
