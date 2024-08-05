/* Write a program that accepts marks (out of 100) of five subjects from user and calculate the sum then calculate percentage? Display message according to following condition:
percentage >=60 Grade A
percentage >=50 Grade B
percentage >=40 Grade C
percentage  <40 Grade D */
#include<iostream>  
using namespace std;
int main(){
int sub1,sub2,sub3,sub4,sub5;
cout<<"Enter marks of five subjects : ";
cin>>sub1>>sub2>>sub3>>sub4>>sub5;
int percentage = (sub1+sub2+sub3+sub4+sub5)/5;
if(percentage>=60 && percentage<=100){
    cout<<"Grade A";
}
else if(percentage<60 && percentage>=50){
    cout<<"Grade B";
}
else if(percentage<50 && percentage>=40){
    cout<<"Grade C";
}
else if(percentage<40){
    cout<<"Grade D";
}
else{
    cout<<"You fail";
}
}