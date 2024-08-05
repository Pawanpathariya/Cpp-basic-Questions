   // constructer: 1.sequential 2.selective,condition,(if-else) 3.iterative(loops)
    /*    sta_1
    Sta_2
    sta_3
    if(condition){
        sta_4 //if condition is true then enter in it
        sta_5  // if false then directly jump to sta_6 left sta_4 and sta_5
    }
    sta_6
*/
//write a program to determine weather a number pass by user is a even number or odd one


#include<iostream>  
using namespace std;
int main(){
 int a;
 cout<<"enter a number : ";
 cin>>a;
 if(a%2==0){
    cout<<"Even";
 }
 else{
    cout<<"odd";
 }

}