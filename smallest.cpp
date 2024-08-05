 // Write a program to calculate smallest number out of given three numbers
#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter three number : ";
    cin>>num1>>num2>>num3;
    if(num1<num2 && num1<num3){
        cout<<num1<<" is smallest in all of the number";
    }

        else if(num2<num1 && num2<num3){
        cout<<num2<<" is smallest in all of the number";
    }
    else {
         cout<<num3<<" is smallest in all of the number";
    }
}