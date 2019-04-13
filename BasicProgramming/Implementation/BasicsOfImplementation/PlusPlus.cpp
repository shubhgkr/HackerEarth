//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/plus-plus-60bcac48/
#include<iostream>
#include<vector>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n,m;
	std::cin>>n>>m;
	std::vector<std::vector<long long>> a;
	a.resize(n,std::vector<long long>(m,0));
	long long mx=0,pts;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			std::cin>>a[i][j];
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			for(int k=1;k<n-1;k++){
				for(int l=1;l<m-1;l++){
					if(std::abs(k-i)+std::abs(l-j)>=3){
						pts=a[i][j]*a[k][l] + a[i-1][j]*a[k-1][l] + a[i+1][j]*a[k+1][l] + a[i][j-1]*a[k][l-1] + a[i][j+1]*a[k][l+1];
						mx=std::max(mx,pts);
					}				
				}
			}
		}
	}
	std::cout<<mx<<"\n";
	return 0;
}