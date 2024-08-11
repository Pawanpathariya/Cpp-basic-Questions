/*  Write a program that prompts the user to input an integer and then 
outputs the number with the digits reversed.
parameter -->int
return --->int   */

#include<iostream>
using namespace std;
 
 int reverse(int num1){
    int sum=0;
    int last;
    while(num1>0){
        last=num1%10;
        sum=sum*10+last;
        num1/=10;
    }
    return sum;
 }

int main(){
    int n1;
    cout<<"Enter a number ";
    cin>>n1;
    reverse(n1);
   int result  = reverse(n1);
   cout<<result;
}
