#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void merge(vector<int>& arr, int l, int mid, int r) {
        vector<int> B(r - l + 1);  // Temporary array for merging
        int i = l;    // Start of the left subarray
        int j = mid + 1; // Start of the right subarray
        int k = 0;    // Index for B
        
        // Merge the two halves
        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                B[k++] = arr[i++];
            } else {
                B[k++] = arr[j++];
            }
        }

        // Copy any remaining elements of the left half
        while (i <= mid) {
            B[k++] = arr[i++];
        }

        // Copy any remaining elements of the right half
        while (j <= r) {
            B[k++] = arr[j++];
        }

        // Copy the merged result from B back into the original array
        for (int x = 0; x < B.size(); x++) {
            arr[l + x] = B[x];
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;  // Find the midpoint
            
            // Recursively divide the array into two halves
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            
            // Merge the two sorted halves
            merge(arr, l, mid, r);
        }
    }
};

int main(){
    int n;
    
    cout<<"Enter the number of elements in teh array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    obj.mergeSort(arr,0,n-1);
    cout<<"Sorted array is : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}