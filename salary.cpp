/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>  
using namespace std;
int main(){
int year;
string name; 
double salary,bonus;
cout<<"Enter your name : ";
cin>>name;
cout<<"Enter your salary : ";
cin>>salary;
cout<<"enter your service year : ";
cin>>year;
  
  cout<<"hello "<<name<< " your salary details is \n";
  if(year>5){
  bonus=salary*(5.0/100);
  cout<<"your bonus is "<<bonus<<endl;
  cout<<"salary is "<<salary+bonus<<endl;
  }
  else{
    cout<<"total bonus is "<<0<<endl;
    cout<<"Your salary is "<<salary;
  }
}