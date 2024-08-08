/* WAP to create a function namedaverage that is created to find out the average of 5 numbers 
parameter -->5 number
return --->string (a message success) */
#include<iostream>
using namespace std;
 
 string average(int num1,int num2,int num3 , int num4 , int num5){
    cout<<"Average is : "<<(num1+num2+num3+num4+num5)/5<<endl;
    return "a message success";
 }

int main(){
    int n1,n2,n3,n4,n5;
    cout<<"Enter 5 number ";
    cin>>n1>>n2>>n3>>n4>>n5;
    string result=average(n1,n2,n3,n4,n5);
    cout<<result;
    
}