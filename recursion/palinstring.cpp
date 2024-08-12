//Write a recursive function to check if a string is a palindrome. A palindrome reads the same forwards and backwards.

#include<iostream>
using namespace std;
bool palin(string str,int start,int end){
 if(start>end){
  return true ;
 }
  else if(str[start]!=str[end]){
    return false;
  }
 else{
  palin(str,start+1,end-1);
 }

}
int main(){
string str;
 cout<<"enter a string ";
 getline(cin , str);
int n=str.length();
if(palin(str , 0,n-1 )){
  cout<<"Palindrome"; 
}
else{
  cout<<"Not a palindrome";
}
}
