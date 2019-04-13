//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/
#include<string>
#include<iostream>
#include<algorithm>
int main(){
	int n;
	std::cin>>n;
	if(n<11)
		std::cout<<"0";
	else{
		std::string s;
		std::cin>>s;
		long long int a[]={0,0,0,0,0,0,0};
		for(int i=0;i<s.length();i++){
			//hackerearth h,a,e,r,c,k,t
			//h=2,a=2,e=2,r=2,c=1,t=1,k=1
			char ch=s[i];
			if(ch=='a')
				a[0]++;
			else if(ch=='e')
				a[1]++;
			else if(ch=='h')
				a[2]++;
			else if(ch=='r')
				a[3]++;
			else if(ch=='c')
				a[4]++;
			else if(ch=='k')
				a[5]++;
			else if(ch=='t')
				a[6]++;
		}
		for(int i=0;i<4;i++)
			a[i]/=2;
		std::cout<<*std::min_element(std::begin(a),std::end(a));
	}
	return 0;
}
