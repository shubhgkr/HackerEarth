//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/white-space-3/
#include<iostream>
#include<string>
#include<algorithm>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::getline(std::cin,s);
    std::cout<<std::count(s.begin(),s.end(),' ');
    return 0;
}