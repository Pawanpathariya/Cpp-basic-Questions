// Write a program to calculate area of different Shapes based on users choice S, C or R (like s for square, c for circle, and r for rectangle)
#include<iostream>
using namespace std;
int main(){
int side,length,width;
double radius;
char shape;
cout<<"select shape S for square C for circle and R for rectangle : ";
cin>>shape;

switch (shape)
{
case 's':
    cout<<"enter side of square : "<<endl;
    cin>>side;
    cout<<"The area of square is : "<<side*side;
    break;

case 'c':
    cout<<"enter radius of circle : "<<endl;
    cin>>radius;
    cout<<"The area of circle is : "<<float(3.14)*radius*radius;
    break;

case 'r':
    cout<<"enter length and breadth of rectangle : "<<endl;
    cin>>length>>width;
    cout<<"The area of rectangle is : "<<length*width;
    break;

default:
cout<<"select s,c,r only";
    break;
}

}