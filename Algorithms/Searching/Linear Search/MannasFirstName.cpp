//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/
#include<iostream>
#include<string>
int countSubstring(std::string &s,std::string sub){
    int c=0;
    for(size_t offset=s.find(sub);offset!=std::string::npos;offset=s.find(sub,offset+sub.length()))
        ++c;
    return c;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        std::string s;
        std::cin>>s;
        int c1=countSubstring(s,"SUVO");
        int c2=countSubstring(s,"SUVOJIT");
        std::cout<<"SUVO = "<<c1-c2<<", SUVOJIT = "<<c2<<"\n";
    }
    return 0;
}