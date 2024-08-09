/* Two numbers are entered through the keyboard. Write a program to find
the value of one number raised to the power of another. 
parameter -->no
return --->no */
#include<iostream>
using namespace std;

void pow(){
  int n1,power;
  cout<<"Enter a number and its power ";
  cin>>n1>>power;
  int result=n1;
  for(int i=1;i<power;i++){
   result=result*n1;
  }
  cout<<result;
 
}

int main(){
 pow();
}