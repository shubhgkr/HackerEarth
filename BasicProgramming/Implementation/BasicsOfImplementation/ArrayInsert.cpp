//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-insert/
#include<iostream>
#include<vector>
#include<numeric>
int main(){
	long long int N,Q,X,Y,L,R;
	std::cin>>N>>Q;
	std::vector<long long int> arr;
	for(int i=0;i<N;i++){
		int x;
		std::cin>>x;
		arr.push_back(x);
	}
	while(Q--){
		int choice,a,b;
		std::cin>>choice>>a>>b;
		if(choice==1){
			arr[a]=b;
		}
		else{
			if(a>=0 && b<N && a<=b)
				std::cout<<std::accumulate(arr.begin()+a,arr.begin()+b+1,0)<<"\n";
			else
				std::cout<<"-1\n";
		}
	}
	return 0;
}
