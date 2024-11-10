#include<bits/stdc++.h>
using namespace std; 

class Solution {
    public:
    void frequencyCount(vector<int>& arr, int N) {
        // Create a hash array to store the frequency of each number
        vector<int> hash(N+1, 0);

        // Count the frequency of each number in the array
        for(int i = 0; i < N; i++) {
            if(arr[i] >= 1 && arr[i] <= N) {
                hash[arr[i]]++;  // Increment frequency for the number
            }
        }

        // Replace elements of the array with their frequency from the hash array
        for(int i = 0; i < N; i++) {
            if (arr[i] >= 1 && arr[i] <= N) {
                arr[i] = hash[arr[i]];  // Replace with the frequency count
            }
        }
    }
};

int main() {
    int N;
    
    // Take input for the number of elements
    cout << "Enter the number of elements in the array : ";
    cin >> N;
    
    vector<int> arr(N);
    
    // Take input for the elements of the array
    cout << "Enter the elements of array : ";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Create object of Solution class and call the frequencyCount function
    Solution obj;
    obj.frequencyCount(arr, N);

    // Output the modified array
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
