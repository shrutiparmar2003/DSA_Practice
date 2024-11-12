#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    int  partition(int a[],int lb,int ub){
        int pivot=a[lb];
        int start=lb;
        int end=ub;
        while(start<end){
        while(start<=ub && a[start]<=pivot){
               start++;
        }
            
            while(a[end]>pivot){
                end--;
                
            }
            if(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            }
        }
        
        
            int temp=a[lb];
            a[lb]=a[end];
            a[end]=temp;
            
          return end;
        
       
    
       

    }
    void quicksort(int a[],int lb,int ub){
        
        if(lb<ub){
            int loc=partition(a,lb,ub);
            quicksort(a,lb,loc-1);
            quicksort(a,loc+1,ub);
        }
    }
   

};
int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution obj;
    obj.quicksort(a,0,n-1);
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
    return 0;

}