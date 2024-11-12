#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int largest(vector<int>&arr){
        int highest=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>highest){
                highest=arr[i];
            }
        }
        return highest;

    }
};
int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;

    cout<<"Enter the array elements to find the largest : ";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    int result = obj.largest(arr);
    cout<<"Largest element is : " <<result;
    
    
    return 0;

}