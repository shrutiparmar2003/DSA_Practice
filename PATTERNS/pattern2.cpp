#include <iostream>
using namespace std;

class Pattern {
public:
    void printSquare(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    Pattern p;
    p.printSquare(size);

    return 0;
}
