#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isprime(int n){
        //to check if a number is prime or not
        int count=0;
        
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                count++; //if you find any factors from 2 to n which divide n ,return false
            
            if(n/i!=i){
			 count++;
        }


        
        
       
    }
        }
        if (count==2){
            return true;
        }
        return false;
    }

};
int main(){
    int n;
    cout<<"Enter a number to check if it is prime: ";
    cin>>n;
    Solution obj;
    bool result=obj.isprime(n);
    cout<<"the number is"<<result;
    return 0;
}