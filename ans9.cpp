//  Write a C++ program to find the maximum of two numbers
#include<iostream>
using namespace std;
int main(){
    int x,y,big;

    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    big=x>y?x:y;
    cout<<"Big is :"<<big<<endl;
    return 0;
}