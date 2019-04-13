//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/killjee-and-sorted-array-ae92a57f/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long n,prev,nxt,cnt=0;
    std::cin>>n>>prev;
    while(--n){
        std::cin>>nxt;
        if(prev>=nxt){
            cnt+=(prev-nxt+1);
            prev=prev+1;
        }
        else
            prev=nxt;
    }
    std::cout<<cnt<<"\n";
    return 0;
}