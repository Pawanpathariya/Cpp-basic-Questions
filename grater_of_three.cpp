//Write a C++ program to find maximum between three numbers
#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter three number : ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is greater in all of the number";
    }

        else if(num2>num1 && num2>num3){
        cout<<num2<<" is greater in all of the number";
    }
    else {
         cout<<num3<<" is greater in all of the number";
    }
}