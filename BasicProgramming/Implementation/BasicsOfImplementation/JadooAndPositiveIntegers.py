//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/jadoo-and-positive-integers/
t=int(input())
s=0
while t:
    n=int(input())
    t-=1
    s+=n*(n>0)
print(s)