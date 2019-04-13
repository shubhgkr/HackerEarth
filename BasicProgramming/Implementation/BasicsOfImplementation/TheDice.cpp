//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11/
#include<iostream>
#include<string>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::cin>>s;
    long c=0;
    if(s[s.length()-1]=='6')
        c=-1;
    else
        for(char ch:s)
            if(ch!='6')
                c++;
    std::cout<<c;
    return 0;
}