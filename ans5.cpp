// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main(){
    int l;
    float volume;
    cout<<"Enter Length of Cuboid"<<endl;
    cin>>l;
    volume=l*l*l;
    cout<<"Volume of cuboid is:"<<volume;    
    return 0;
}