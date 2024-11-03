/*pass by value and pass by reference
Geek is learning about functions and calling a function with arguments. He learns that passing can take one of two forms: pass by value or pass by reference.

Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in fulfilling his goal.Example 2:

Input:
a = 10
b = 20
Output: 11 22
Explanation: 10 was passed by value whereas 20 passed by reference.

Constraints:
1 <= a,b <= 105

Your Task:
You don't need to read input or print anything. Your task is to complete the function passedBy() which takes a and b as input parameters and returns array of two required integers.*/

#include<bits/stdc++.h>
using namespace std;
static pair<int,int> passedby(int &a ,int &b){
    a=a+1;
    b=b+2;
    return{a,b};

}
int main()
{int m, n;
    cin>>m;
    cin>>n;
    pair<int,int> result= passedby(m,n);
    cout<<result.first<<","<<result.second;
    


    return 0;
}