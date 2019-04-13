//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/
#include<iostream>
#include<string>
int main()
{
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,l=0;
        std::cin>>n;
        std::string str;
        std::cin>>str;
        int count1[12]={67,71,73,79,83,89,97,101,103,107,109,113};
        for(int j=0;j<n;j++)
        {  
            int count2[12];
            for(int k=0;k<12;k++)
	            count2[k]=count1[k]-str[j];
            int min=abs(count2[0]);
            for(int k=0;k<12;k++)
            {
		if(abs(count2[k])<min)
			min=abs(count2[k]);
             }
            for(int k=0;k<12;k++){ 
		if(abs(count2[k])==min){
			str[j]+=count2[k];
			break;
               }
           }
        }
        std::cout<<str<<"\n";
    } 
     return 0;   
}