#include<iostream>
using namespace std;
void great_zero_reference(int *num1, int *num2, int *num3){
 if(*num1>*num2 && *num1>*num3){
    *num1=0;
 }
 else if(*num2>*num1 && *num2>*num3){
    *num2=0;
 }
 else if(*num3>*num2 && *num3>*num2){
    *num3=0;
 }
}
void great_zero_value(int num1, int num2, int num3){
 if(num1>num2 && num1>num3){
    num1=0;
 }
 else if(num2>num1 && num2>num3){
    num2=0;
 }
 else if(num3>num2 && num3>num2){
    num3=0;
 } 
}
int main(){
int n1,n2,n3;
cout<<"Enter three number ";
cin>>n1>>n2>>n3;
great_zero_value(n1,n2,n3); 
cout<<"call by value "<<n1<<" "<<n2<<" "<<n3<<endl;

great_zero_reference (&n1,&n2,&n3); 
cout<<"call by reference "<<n1<<" "<<n2<<" "<<n3<<endl;
}