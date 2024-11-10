#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
void selectionsort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int min =i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){min=j;}
        }
        swap(arr[i],arr[min]);
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
    obj.selectionsort(arr,n);
    cout<<"Sorted array is : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}