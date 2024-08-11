#include<iostream>
using namespace std;
 int main(){ 
    int count=0;
 string str="c++ is a powerful language";
 for(int i=0;i<str.length();i++){
    if(str[i]==' ' ){
    count++;
    }
 }
 cout<<count;
 }
