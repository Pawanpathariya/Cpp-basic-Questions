/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<iostream>
using namespace std;
int main(){
int temperature;
cout<<"Enter temperature in centigrade : ";
cin>>temperature;

if(temperature<0){
    cout<<"Freezing weather";
}
if(temperature>=0 && temperature<10){
    cout<<"Very Cold weather";
}
if(temperature>=10 && temperature<20){
    cout<<" Cold weather";
}
if(temperature>=20 && temperature<30){
    cout<<"Normal Temperature";
}
if(temperature>=30 && temperature<40){
    cout<<"It's hot";
}
if(temperature>=40){
    cout<<"It's very hot";
}
}
