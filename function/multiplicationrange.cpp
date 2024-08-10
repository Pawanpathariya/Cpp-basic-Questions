/*  Write a program that ask the user two input . 
print the multiplication table of that range of numbers(nesting)

parameter -->int,int(range)
return --->no return */
#include<iostream>
using namespace std;

 void  multiplication(int n1,int n2) {
   for(int i=n1;i<=n2;i++){
    for(int j=1;j<=10;j++){
    cout<<i<<"*"<<j<<"="<<i*j<<endl;
    }
    cout<<endl;
   }
 }

int main(){
   int num,num2;
    cout<<"enter range  "<<endl;
    cin>>num>>num2;
    multiplication(num,num2);
}