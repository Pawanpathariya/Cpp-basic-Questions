#include<iostream>
using namespace std;
 int main(){ 
    int count=0;
 string str="c++ is a powerful language";
 string new_str="";
 for(int i=0;i<str.length();i++){
    if(str[i]==' ' ){
    }
    else{
        new_str+=str[i];
    }
 }
 cout<<new_str;
 }
