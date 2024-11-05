//print 1 to N using recursion
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int count=0;
    void printNos(int N){
        if(count==N){
            return;
        }
        count++;
        cout<<count<<" ";
        printNos(N);

    }

};
int main(){
    int N;
    cout<<"Enter a number to print from 1 to that number: ";
    cin>>N;
    Solution obj;
    obj.printNos(N);
    return 0;

}