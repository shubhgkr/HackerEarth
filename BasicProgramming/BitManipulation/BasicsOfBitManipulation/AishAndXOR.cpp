//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/aish-and-xor-2/description/
#include<iostream>
#include<vector>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long n,q,l,r;
    std::vector<long> arr,cnt;
    arr.push_back(0);
    cnt.push_back(0);
    std::cin>>n;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        arr.push_back(arr[i]^a);
        cnt.push_back(cnt[i]+!(a));
    }
    std::cin>>q;
    while(q--){
        std::cin>>l>>r;
        std::cout<<(arr[r]^arr[l-1])<<" "<<(cnt[r]-cnt[l-1])<<"\n";
    }
    return 0;
}