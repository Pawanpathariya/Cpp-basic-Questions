/* Write a program to find the factorial of any number entered by user
parameter -->int
return --->int (or long long in case of higher number) i,e result */
#include<iostream>
using namespace std;
 
 int factorial(int num1){
    int sum=1;
    for(int i=num1;i>0;i--){
     sum=sum*i;
    }
    return sum;
 }

int main(){
    int n1;
    cout<<"Enter a number ";
    cin>>n1;
   int result = factorial(n1);
    cout<<result;
}
