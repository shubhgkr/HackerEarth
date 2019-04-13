//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/
#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	for (int i = 2; i <= n; i++)
	{	
	    if(i<=3){
	        std::cout<<i<<" ";
	        continue;
	    }
	    if(!(i&1)||(i%3)==0)
	        continue;
		bool isPrime=true;
	    int j=5,w=2;
	    while(j*j<=i){
	        if(i%j==0){
	            isPrime=false;
	            break;
	        }
	        j+=w;
	        w=6-w;
	    }
		if(isPrime)
			std::cout<<i<<" ";
	}
	return 0;
}