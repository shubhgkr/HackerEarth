//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/almost-golden-rectangular-1c9d72c0/
#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,c=0;
    double w,h;
    std::cin>>n;
    while(n--){
        std::cin>>w>>h;
        double x = w/h;
		double y = h/w;
		double m = 1.7;
		double n = 1.6;
		if((x>=n && x<=m) || (y>=n && y<=m))
			c++;
    }
    std::cout<<c;
    return 0;
}