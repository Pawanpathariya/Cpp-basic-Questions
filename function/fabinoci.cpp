/* Write a program to print Fibonacci series of n terms where n is input by user :
0 1 1 2 3 5 8 13 24 ..... 
parameter -->no
return --->no */
#include<iostream>
using namespace std;

void fabi(){
  int n;
  cout<<"Enter how many number of fabinoci series you want ";
  cin>>n;
 int a=0,b=1;
 cout<<a<<" "<<b<<" ";
 n=n-2;
 for(int i=1;i<=n;i++){
    int c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";
 }

}

int main(){
 fabi();
}