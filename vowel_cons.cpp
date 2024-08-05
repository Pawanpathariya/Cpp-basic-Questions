//Write a program to calculate whether a character is vowel or consonant
#include<iostream>
using namespace std;
int main(){
char character;
cout<<"enter a character : ";
cin>>character;
 
 if(character=='a' || character=='e'|| character=='i'||character=='o'||character=='u'){
    cout<<"it is vowel";
 }
 else{
    cout<<"its a consunent";
 }
        
}