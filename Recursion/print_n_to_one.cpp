//Print numbers from N to 1 (space separated) without the help of loops.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printnos(int N){
        if(N<1){return;} //No need of count here. you can directly decrease the number by N--
        cout<<N<<" ";
        N--;
        printnos(N);

    }
};
int main(){
    int N;
    cout<<"Enter a number to print to print in reverse sequence from that number : ";
    cin>>N;
    Solution obj;
    obj.printnos(N);
    return 0;

}