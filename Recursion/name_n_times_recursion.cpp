//Print GFG n times without the loop.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int count=0;
    void printname(int N){
        
        if(count==N){
            return;
        }
        count++;
        cout<<"GFG"<<" ";
        
        printname(N);
    }
};
int main(){
    int N;
    cout<<"Enter number of times you want GFG to be printed: ";
    cin>>N;
    Solution obj;
    obj.printname(N);
    return 0;

}