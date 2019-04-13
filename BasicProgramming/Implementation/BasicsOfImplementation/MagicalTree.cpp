//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/magical-tree/
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N;
	std::vector<int> arr;
	std::cin>>N;
	std::string str;
	while(N--){
		std::cin>>str;
		int s=(str[0]-'0');
		for(int i=2;i<str.length();i+=2){
			if(str[i-1]=='+')
				s+=(str[i]-'0');
			else
				s-=(str[i]-'0');
		}
		arr.push_back(s);
	}
	std::cout<<*(std::max_element(arr.begin(),arr.end()));
}
