#include <iostream>
using namespace std;

class Pattern {
public:
    void printTriangle(int n) {
	    // code here
	    for(int i=n;i>=1;i--){
	        for(int j=1;j<=i;j++){
	            cout<<j<<" ";
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
