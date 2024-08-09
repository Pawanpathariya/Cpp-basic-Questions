/* Write a program to calculate HCF of Two given number

parameter -->no
return --->return int */
#include<iostream>
using namespace std;

int hcf(){
  int n1,n2,hcf;
  bool flag=false;
  cout<<"Enter two number ";
  cin>>n1>>n2;
  int min=0;
 if(n1>n2){
    min=n2;
 }
 else{
    min=n1;
 }

 for(int i=min;i>=2;i--){
 if(n1%i==0 && n2%i==0){
    flag=true;
    hcf=i;
 }
 }

 if(flag==true){
    return hcf;
 }
 else{
 return 0;
 }
   }

int main(){
 int result = hcf();
 cout<<hcf;
}