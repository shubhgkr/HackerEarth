//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
#include<iostream>
int main(){
	int n,l,w,h;
	std::cin>>l>>n;
	for(int i=0;i<n;i++){
		std::cin>>w>>h;
		std::cout<<w<<" "<<h<<"\n";
		if(w<l || h<l)
			std::cout<<"UPLOAD ANOTHER\n";
		else if(w==h)
			std::cout<<"ACCEPTED\n";
		else
			std::cout<<"CROP IT\n";
	}
	return 0;
}
