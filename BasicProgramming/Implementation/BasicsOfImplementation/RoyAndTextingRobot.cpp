//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-texting-robot-2/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string s;
	int t,crnPos=1;
	std::cin>>t;
	while(t--){
		std::cin>>s;
		for(char ch:s){
			if(ch=='_'){
				count+=1+(crnPos!=0);
				crnPos=0;
			}
			else if(ch=='.' || ch==',' || ch=='?' || ch=='!'){
				if(crnPos!=1)
					count++;
				crnPos=1;
				count++;
				if(ch==',')
					count++;
				else if(ch=='?')
					count+=2;
				else
					count+=3;
			}

		}
	}
	return 0;
}
