//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/complete-the-syllabus/
#include<iostream>
#include<string>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T, K;
	std::cin>>T;
	std::string week[7] {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY",
					"SATURDAY", "SUNDAY"};
	int days[7];
	while (T--) {
		std::cin>>K;
		int sum = 0;
		for (int i = 0; i != 7; ++i) {
			std::cin>>days[i];
			sum += days[i];
		}
		K %= sum;
		if (K == 0) {
			int ind = 6;
			while (!(days[ind--]) && (ind>=0));
			std::cout<<week[ind + 1]<<"\n";
		}
		else {
			int i = 0; 
			while (K>0) {
				K -= days[i];
				i++;
				if (i == 7 && K > 0)
					i = 0;
			}
			std::cout<<week[i - 1]<<"\n";
		}
	}
	return 0;
}