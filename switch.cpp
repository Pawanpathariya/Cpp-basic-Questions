// write a program to create a calculator using switch case.
#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"Enter two number : ";
cin>>num1>>num2;

char op;
cout<<"Enter operation +,-,/,* : ";
cin>>op;
switch (op)
{
case '+':
cout<<num1+num2; 
    break;

case '-':
cout<<num1-num2; 
    break;

case '*':
cout<<num1*num2; 
    break;

case '/':
cout<<num1/float(num2); 
    break;


default:
cout<<"Invalid Choice";
    break;
}
    
