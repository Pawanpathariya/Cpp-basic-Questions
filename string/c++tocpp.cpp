#include<iostream>
using namespace std;
 int main(){ 
 string str="c++ is powerful language";
 for(int i=0;i<str.length();i++){
    if(str[i]=='+' ){
    str[i]='p';
    }
 }
 cout<<str;
 }
