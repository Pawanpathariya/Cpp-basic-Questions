//wap to find highest among 3 number 

#include<iostream>
using namespace std;


int high(int,int,int);

int main(){
    int n1,n2,n3;
    cout<<"Enter three number ";
    cin>>n1>>n2>>n3;
    high(n1,n2,n3); //actual parameter
    int result = high(n1,n2,n3);
    cout<<result;
}
int high(int num1,int num2,int num3){  //formal parameter
 if(num1>num2 && num1>num3){
    return num1;
 }
 else if(num2>num1 && num2>num3){
    return num2;
 }
 if(num3>num2 && num3>num1){
    return num3;
 }
}