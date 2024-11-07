//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

/*F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.*/

//for example fibonacci number at index 5 = (fib no. at index 4) +(fib no. at index 3)
//solving using recursion
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    int fib(int n){
    if(n<=1){return n;}
    return fib(n-1)+fib(n-2);
    }
};
int main(){
    int n;
    cout<<"Enter an index number at which you want the know the fibonacci number : ";
    cin>>n;
    Solution obj;
    obj.fib(n);
    cout<<obj.fib(n);
    return 0;
}