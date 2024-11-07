//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Question : Given a string s, return true if it is a palindrome, or false otherwise.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int i=0;
    bool f(int i, string &s){
        int n;
        n=s.size();
        if(i>=n/2){return true;}
        if(s[i]!=s[n-i-1]){
            return false;
        }
        return f(i+1,s);
    }
};
int main(){
    string s;
    cout<<"Enter a string to check if it is palindrome or not: ";
    cin>>s;
    Solution obj;
    int result= obj.f(0,s);
    if(result==1){cout<<"true";}
    else{cout<<"false";}
    return 0;
}