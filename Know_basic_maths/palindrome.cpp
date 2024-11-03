#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool ispalindrome(int x){
        if(x==0){
            return true;
        }
        if(x<0||x%10==0 && x!=0){
            return false;
        }
        int temp=x;
        int revno=0;
        int last_digit;
        while(x>0){
            last_digit=x%10;
            if(revno>INT32_MAX/10 || revno==INT32_MAX/10 && last_digit>7){
                return false;
            }
            revno=revno*10+last_digit;
            x=x/10;
            
        }
        if(revno==temp){
            return true;
        }
        return false;
          
            

    

    }
};

int main(){
    int x;
    cout<<"Enter a number you want  to check the palindrome of :";
    cin>>x;
    Solution obj;
    bool palindromecheck=obj.ispalindrome(x);
    if (palindromecheck==true){
    cout<<"The number you entered is "<<palindromecheck<<"is a palindrome"<<endl;}
    else{
        cout<<"The number you entered is "<<palindromecheck<<"is not a palindrome"<<endl;
    }
    return 0;
}