//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/prime-string-598/
#include<iostream>
#include<string>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string str;
        std::cin>>str;
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            if(str[i]<=99) str[i]='a';
            else if(str[i]<=102) str[i]='e';
            else if(str[i]<=105) str[i]='g';
            else if(str[i]<=108) str[i]='k';
            else if(str[i]<=111) str[i]='m';
            else str[i]='q';
        }        
        std::cout<<str<<"\n";
    }
    return 0;
}
