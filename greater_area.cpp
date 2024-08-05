//Write a program to Take values of length and breadth of a rectangle from user ,also Take value of side of a square from user ,and check which area is greater.
#include <iostream>
using namespace std;
int main(){
    int length,breadth,side;
    cout<<"enter length and breadth of rectangle : ";
    cin>>length>>breadth;
    cout<<"enter side of square : ";
    cin>>side;
    int area_rect=length*breadth;
    int area_square=side*side;
  cout<<"area of rectangle is : "<<area_rect<<endl<<"area of square is : "<<area_square<<endl;
    if(area_rect>area_square){
       cout<<"the area of rectangle is greater then square area "<<endl;
    }
    else{
         cout<<"the area of square is greater then rectangle area "<<endl;
    }
}