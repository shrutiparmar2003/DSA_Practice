#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
void bubblesort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

        
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
    obj.bubblesort(arr,n);
    cout<<"Sorted array is : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}