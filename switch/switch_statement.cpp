/*Switch-case is one of the ways to implement them.
in a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.
There are 2 choices in the menu:
Choice 1 is to find the area of a circle having radius 'r'.
Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.
You are given the choice 'ch' and an array 'a'.
If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.
Consider the choice and print the appropriate area.*/

#include<bits/stdc++.h>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
	switch(ch){
		case 1:
		if(a.size()==1){
			double r=a[0];
			return M_PI*r*r;
		}
		else{"inavlid argument";}
		case 2:
		if(a.size()==2){
			double l=a[0];
			double b= a[1];
			return l*b;
		}
		else{"inavlid argument";}


	}
}
int main(){
    int ch;
    vector<double>a;
    cout<<"Enter your choice (1 for circle and 2 for rectangle = )"<<endl;
    cin>>ch;
    if(ch==1){
        double r;
        cout<<"Enter the radius of circle = ";
        cin>>r;
         a.push_back(r);
      
    }
    else{
        double l,b;
        cout<<"Enter the radius of circle = ";
        cin>>l>>b;
        a.push_back(l);
        a.push_back(b);

    }
    double area = areaSwitchCase(ch, a);
        cout << "The area is: " << area << endl;
    return 0;
}