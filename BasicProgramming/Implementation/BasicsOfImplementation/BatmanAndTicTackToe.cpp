//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/batman-and-tick-tack-toe/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T;
	std::cin>>T;
	char board[4][4]={{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'}};
	while(T--){
		std::string r1,r2,r3,r4;
		std::cin>>r1>>r2>>r3>>r4;
		for(int i=0;i<4;i++){
			board[0][i]=r1[i];
			board[1][i]=r2[i];
			board[2][i]=r3[i];
			board[3][i]=r4[i];
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++)
				std::cout<<board[i][j];
			std::cout<<"\n";
		}
	}
	return 0;
}
