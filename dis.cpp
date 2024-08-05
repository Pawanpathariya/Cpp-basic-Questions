#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number :";
cin>>n;
if(n>0){
    for(char i='A';i<='Z';i=i+2){
        cout<<i<<" ";
    }
}
    if(n<0){
    for(char i='z';i>='a';i--){
        cout<<i<<" ";
    }
    }
    if(n==0){
        cout<<"a,e,i,o,u";
    }
}