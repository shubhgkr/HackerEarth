//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/micro-and-binary-strings/
#include<iostream>
#include<string>
#include<algorithm>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        long n;
        std::string s;
        std::cin>>n>>s;
        std::cout<<std::count(s.begin(),s.end(),'1')<<"\n";
    }
    return 0;
}