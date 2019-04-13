//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/one-string-no-trouble-37037871/
#include<iostream>
#include<string>
#include<algorithm>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::cin>>s;
    long long int i,c=1,maxCount=0;
    for(i=1;i<s.length();i++)
        if(s[i-1]==s[i]){
            maxCount=std::max(c,maxCount);
            c=1;
        }
        else
            c++;
    maxCount=std::max(c,maxCount);
    std::cout<<maxCount;
    return 0;
}