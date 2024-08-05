// Write a program to take two number from user and check who is max
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"The greater number is "<<num1<<endl;
    }
    else{
            cout<<"The greater number is "<<num2<<endl;
    }
}