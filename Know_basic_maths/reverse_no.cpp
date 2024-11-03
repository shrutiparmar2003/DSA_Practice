/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int reverse(int x){
        int revno=0;
        int last_digit;
        while(x!=0){
        last_digit=x%10;
        x=x/10;
        revno=revno*10+last_digit;
        if(revno<INT32_MIN || revno>INT32_MAX ){
            return 0;
        }
    }
    }

};

int main(){
    int x;
    cout<<"Enter a number you want to reverse : ";
    cin>>x;
    Solution obj;
    int reversed_no=obj.reverse(x);
    cout<<"Reversed number is:"<< reversed_no<<endl;
return 0;

}