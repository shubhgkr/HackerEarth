//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-clash-197de0e2/
#include<iostream>
#include<string>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string a,b;
    std::cin>>a>>b;
    int total=0,cnt[26]={0};
    for(int i=0;i<a.length();i++){
        cnt[a[i]-'a']++;
        cnt[b[i]-'a']++;
    }
    bool oddCount=0;
    for(int i=0;i<26;i++){
        if(cnt[i]&1)
            oddCount=1;
        total+=(cnt[i]-(cnt[i]&1));
    }
    std::cout<<(total+oddCount);
    return 0;
}