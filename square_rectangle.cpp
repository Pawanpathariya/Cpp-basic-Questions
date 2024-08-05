// Write a program to Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length of rectangle : ";
    cin>>length;
    cout<<"Enter breadth of rectangle : ";
    cin>>breadth;
    if(length==breadth){
        cout<<"It is a square ";
    }
    else{
    cout<<"It is not a square ";
    }
}