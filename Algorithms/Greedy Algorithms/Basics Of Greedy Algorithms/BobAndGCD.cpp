//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/bob-and-gcd-d6d86b3b/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>k>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            std::cin>>a[i];
        long sum=0;
        for(i=0;i<n;i++){
            int x=a[i]%k;
            if(a[i]!=1 && a[i]>k)
                sum+=std::min(x,k-x);
            else
                sum+=(k-a[i]);
        }
        std::cout<<sum<<"\n";
    }
    return 0;
}