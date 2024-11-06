//Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
long long sumofseries(long long n){
    if(n==0){
        return 0;
    }
    return((n*n*n)+sumofseries(n-1));

}
};
int main(){
    long long n;
    cout<<"Enter a number tillwhere you want sum : ";
    cin>>n;
    Solution obj;
    long long result= obj.sumofseries(n);
    cout<<result<<endl;
    return 0;

}