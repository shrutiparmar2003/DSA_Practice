//here will solve using recursion
//question : You are given an array of integers arr[]. Your task is to reverse the given array.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void f(int n,int arr[],int i){
        if(i>=n/2){return ;}
            swap(arr[i],arr[n-i-1]);
            f(n,arr,i+1);
        }
        //return;

    };

int main(){
    cout<<"Enter the number of elements in array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array you want to reverse: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int i;
    Solution obj;
        
    obj.f(n,arr,0);
    cout<<"Reversed array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
     cout << endl;
    
    return 0;


}