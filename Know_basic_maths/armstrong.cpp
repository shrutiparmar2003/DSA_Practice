#include<bits/stdc++.h>
using namespace std;
//Armstrong numbers (or narcissistic numbers) are numbers that equal the sum of their digits each raised to the power of the number of digits. //
//eg :153= 1^3+ 5^3+ 3^3

//Question : You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
	
    class Solution{
        public:
    bool checkArmstrong(int n){
       int temp=n;
	   int ld;
	   long long sum=0;
	   int count=0;
	   while(temp>0){
		   temp=temp/10;
		   count++;
	   }
	   temp=n;
	   while(n>0){
		   ld=n%10;
		   n=n/10;
		   
		  sum =sum+ static_cast<long long>(pow(ld, count));
	   }
	   
		  if(temp==sum){
            return true;
          }
	   
	  return false;
	}
    };

	


int main(){
	int n;
	cout<<"Enter a number to check if it is armstrong or not:";
	cin>>n;
	Solution obj;
	bool result=obj.checkArmstrong( n);
	cout<<result;
	return 0;
}
