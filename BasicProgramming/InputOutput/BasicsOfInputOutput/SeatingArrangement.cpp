//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/
#include<iostream>
int main(){
	int n;
	std::cin>>n;
	int front_seat_offset[12] = {-11, 11, 9, 7, 5, 3, 1, -1, -3, -5, -7, -9};
	while(n--){
		int seat;
		std::cin>>seat;
		int rem=seat%6;
		std::cout<<seat + front_seat_offset[seat%12]<<" ";
		if(rem<=1)
			std::cout<<"WS\n";
		else if(rem==2 || rem==5)
			std::cout<<"MS\n";
		else
			std::cout<<"AS\n";
	}
	return 0;
}
