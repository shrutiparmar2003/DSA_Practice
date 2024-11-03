#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     long long sumofdivisors(int n){
        long long sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                sum=sum+i;
            
                if(i!=n/i){
                sum=sum+n/i;
                
            }
        }
     }
     return sum;
     }

     long long total_sum_of_divisors(int n){
        long long total_sum=0;
        for(int i=1;i<=n;i++){
            total_sum=total_sum+sumofdivisors(i);

        }
        return total_sum;
     }

};

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    Solution obj;
    long long result=obj.total_sum_of_divisors(n);
    cout<<result;
    return 0;
}