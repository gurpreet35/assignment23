// Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    float avg;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    cout<<"Enter the value of z:";
    cin>>z;
    avg=(x+y+z)/3;
    cout<<"Average is"<<avg<<endl;
    return 0;
}