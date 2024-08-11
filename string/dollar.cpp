#include<iostream>
using namespace std;
 int main(){ 
 string str="apple is good";
 for(int i=0;i<str.length();i++){
    if(str[i]=='p' || str[i]=='o'){
    str[i]='$';
    }
 }
 cout<<str;
 }
