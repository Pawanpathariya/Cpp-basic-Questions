//wap to reverse a string and hence find out wheather it is pallindrome or not.
#include<iostream>
using namespace std;
 int main(){ 
 string name;
 cout<<"Enter a name :";
 cin>>name;
 string new_name="";
 int size = name.length();
//  cout<<size<<endl;
//  new_name=new_name+"now"; //concatenate
//  cout<<new_name;

  for(int i=size-1;i>=0;i--){
   new_name=new_name+name[i];
  }

  if(name==new_name){
    cout<<"Pallindrome";
  }
  else{
    cout<<"Not a Pallindrome";
  }
 }