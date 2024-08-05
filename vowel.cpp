//  Write a program to check if entered character is vowel or not.
#include<iostream>
using namespace std;
int main(){
char chara;
cout<<"enter a character : ";
cin>>chara;

switch (chara)
{
case 'a':
   cout<<"vowels";
    break;
case 'e':
   cout<<"vowels";
    break;
case 'i':
   cout<<"vowels";
    break;
case 'o':
   cout<<"vowels";
    break;
case 'u':
   cout<<"vowels";
    break;

default:
cout<<"This is not a vowels";
    break;
}

}