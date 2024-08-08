/* WAP to find the area of rectangle taking all essential input in function
itself

parameter -->no
return --->no */
#include<iostream>
using namespace std;

void area(){
  int l,b;
  cout<<"Enter length and width ";
  cin>>l>>b;
  int area=l*b;
  cout<<"area of rectangle is : "<<area;
}

int main(){
 area();
}