//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/jarvis-and-seven-segments-1/description/
#include <iostream>
#include <climits>
 
int s[10]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
 
long sumOfDigits(long n){
    long sum = 0;
     do {
        sum += s[n % 10];
        n /= 10;
     } while (n);
    return sum;
}
 
int main() {
    int t;
    std::cin>>t;
    while (t--) {
        long n,mn = INT_MAX, best,i;
        std::cin>>n;
        for (i = 0; i < n; ++i) {
            long d;
            std::cin>>d;
            long sd = sumOfDigits(d);
            if (sd < mn) {
                mn = sd;
                best = d;
            }
        }
        std::cout<<best<<"\n";
    }
    return 0;
}