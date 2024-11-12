#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
           int temp =arr[i];
           int j=i-1;
           while(j>=0 && temp<arr[j] ){
               arr[j+1]=arr[j];
               j--;
               
           }
           arr[j+1]=temp;
        }
    }
};

int main(){
    int n;
    
    cout<<"Enter the number of elements in teh array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    obj.insertionSort(arr,n);
    cout<<"Sorted array is : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}