//Q6 - Write a C++ program to swap two numbers with the help of a third variable.
#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout<<"ENTER NUMBER x:";
    cin>>x;
    cout<<"ENTER NUMBER Y:";
    cin>>y;

    int c;
    c=y;
    y=x;
    x=c;
    cout<<"swapped numbers:"<<x<<","<<y;


}