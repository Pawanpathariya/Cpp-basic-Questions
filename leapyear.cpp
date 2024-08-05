#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year : ";
    cin>>year;

if((year%4==0 && year%100!=0 ) || year%400==0){
cout<<"It is leap Year";
}
else{
    cout<<"It is not a leap Year";
}
}