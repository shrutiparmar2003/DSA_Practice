//to print the table of a number in reverse order using while loop
#include<iostream>
using namespace std;
int main()
{int multiplier=10;
int n;
cout<<"Enter the number you want to print the table of in reverse order:";
cin>>n;
while(multiplier>0){
    cout<<multiplier*n<<endl;
    multiplier--;
}
    return 0;
}