/* Write a program to take input age of male or Female and check he/she is eligible for marriage or not.ask age and gender  */
 #include <iostream>
 using namespace std;
 int main(){
    int age;
    char gender;
   cout<<"Enter your gender m for male and f for female : ";
   cin>>gender;
   cout<<"Enter your age : ";
   cin>>age;
   
   if(gender=='m' && age>=21 ){
     cout<<"eligible";
   }
   else if(gender=='f' && age>=18){
    cout<<"eligible";
   }
   else{
    cout<<"not eligible"; }
 }