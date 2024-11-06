//A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
//Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     vector<long long> factorialNumbers(long long n) {
       long long fact=1;
       long long i=2;
       vector<long long>result;
       while(fact<=n){
        result.push_back(fact);
        fact=fact*i;
        i++;
       }
       return result;
           
       }
       
      
    
};
int main(){
    long long n;
    cout<<"Enter a number to print the factorials exactly less than n : ";
    cin>>n;
    Solution obj;
    vector<long long>result= obj.factorialNumbers(n);
    for (long long fact : result) {
        cout << fact << " ";
    }
    return 0;

}