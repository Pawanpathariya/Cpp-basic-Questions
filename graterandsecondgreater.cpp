// Write a C++ program to find maximum and second maximum between three numbers
#include<iostream>
using namespace std;
int main(){
       int num1,num2,num3;
    cout<<"Enter three number : ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<"the largest number is : "<<num1<<endl;
        if(num2>num3){
            cout<<"the second largest is : "<<num2;
        }
        else{
             cout<<"the second largest is : "<<num3;
        }
    }
     if(num2>num3 && num2>num1){
        cout<<"the largest number is : "<<num2<<endl;
        if(num3>num1){
            cout<<"the second largest is : "<<num3;
        }
        else{
             cout<<"the second largest is : "<<num1;
        }
    }
     if(num3>num2 && num3>num1){
        cout<<"the largest number is : "<<num3<<endl;
        if(num2>num1){
            cout<<"the second largest is : "<<num2;
        }
        else{
             cout<<"the second largest is : "<<num1;
        }
    }
}