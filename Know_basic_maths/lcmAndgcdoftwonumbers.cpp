#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<long long>lcmAndgcd(long long a,long long b){
        long long originalA=a;
        long long originalB=b;
        long long gcdvalue;
        long long lcmvalue;

        //finding gcd
        while(a>0 && b>0){     /*This part checks which of the two numbers, a or b, is larger. 
        If a is larger than b, then a is updated to a % b (remainder of a divided by b). If b is larger, it does the opposite by setting b to b % a.
        This step is the essence of the Euclidean algorithm for finding the GCD.
        Repeatedly taking the remainder keeps shrinking the numbers until one of them reaches zero.*/
            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }

        }
        if(a==0){
            gcdvalue=b;
            
        }
        else{gcdvalue=a;}

        lcmvalue=(originalA*originalB)/gcdvalue;
        return {lcmvalue,gcdvalue};
    }
    
};
int main(){
    long long a;
    long long b;
    cout<<"Enter two numbers you want the lcm and gcd of : ";
    cin>>a>>b;
    Solution obj;
    vector<long long>result= obj.lcmAndgcd(a,b);
     cout << "LCM: " << result[0] << endl;
    cout << "GCD: " << result[1] << endl;

    return 0;
    

}