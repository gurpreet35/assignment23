// Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    cout<<"x :"<<x<<" y :"<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x :"<<x<<" y :"<<y<<endl;
    return 0;
}