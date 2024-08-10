/* Write a program that ask the user to input a positive integer. 
It should then print the multiplication table of that number.

parameter -->int
return --->no return */
#include<iostream>
using namespace std;

 void  multiplication(int n1) {
   for(int i=1;i<=10;i++){
    cout<<n1<<"*"<<i<<"="<<n1*i<<endl;
   }
 }

int main(){
   int num;
    cout<<"enter positive number "<<endl;
    cin>>num;
  if(num>0){
    multiplication(num);
  }
  else{
    cout<<"Enter positive number ";
  }
}