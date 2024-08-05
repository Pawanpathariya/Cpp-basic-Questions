#include<iostream>
using namespace std;
// Write a program that calculates the electricity bill based on the following criteria:
// Units up to 100: 0.50 per unit
// Units from 101 to 200: 0.75 per unit
// Units from 201 to 300: 1.20 per unit
// Units above 300: 1.50 per unit

int main(){
    int unit,price=0;
    cout<<"enter the unit :";
    cin>>unit;

    if(unit<100){
        price=unit*0.50;
        cout<<"your bill is :"<<price;
    }

    else if(unit>101&&unit<200){
        price=unit*0.75;
        cout<<"your bill is :"<<price;
    }
    else if(unit>200&&unit<300){
        price=unit*1.20;
        cout<<"your bill is :"<<price;
    }
    else if(unit>300){
        price=unit*1.50;
        cout<<"your bill is :"<<price;
    }

}