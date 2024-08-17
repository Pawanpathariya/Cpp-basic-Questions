//Write a c++ class named Circle constructed by a radius and two methods which will compute the area and the perimeter of a circle
#include<iostream>
using namespace std;
class Circle{
public:
int radius;

void insert (){
    cout<<"enter a radius of circle :";
    cin>>radius;
}
void area(){
    cout<<"Area of cicle is "<<3.14*radius*radius<<endl;
}

void parameter(){
    cout<<"Parameter of circle is "<<2*3.14*radius<<endl;
}

}obj1;

int main(){
// Circle obj1;
obj1.insert();
obj1.area();
obj1.parameter();
}