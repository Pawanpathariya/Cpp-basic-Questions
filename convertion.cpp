/*Write a program that converts between different units of length. The user should enter a value and a choice of conversion:
1.	Meters to Centimeters
2.	Centimeters to Meters 
3.	Miles to Kilometers
4.	Kilometers to Meters*/

#include<iostream>
using namespace std;
int main(){
int unit;
cout<<"Select convertion 1 for meter to cm 2 for cm to m 3 for mile to km 4 km to m : ";
cin>>unit;
cout<<"Enter a number :";
int num;
cin>>num;
switch (unit)
{
case 1:
   cout<<num*100;
    break;

case 2:
   cout<<num*float(0.01);
    break;

case 3:
   cout<<num*float(1.609);
    break;

case 4:
   cout<<num*1000;
    break;


default:
cout<<"Select 1-4";
    break;
}

}
