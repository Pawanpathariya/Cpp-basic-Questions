#include <iostream>
using namespace std;
int main(){
double num1,num2;
string choice="yes";
while (choice=="yes")
{
  cout<<"enter two number : ";
  cin>>num1>>num2;
  cout<<"Addition : "<<num1+num2<<endl;
  cout<<"Do you want to continue 'yes'  for again otherwise type anything : ";
  cin>>choice;
  if(choice=="yes"){
    cout<<"You can proceed";
  }
  else{
    cout<<"Thankyou for using our service";
  }
  }
}