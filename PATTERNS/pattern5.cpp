#include <iostream>
using namespace std;

class Pattern {
public:
    void printTriangle(int n) {
	    // code here
	    for(int i=1;i<=n;i++){
	        for(int j=n;j>=i;j--){
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}
};

int main() {
    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;

    Pattern p;
    p.printTriangle(size);

    return 0;
}
