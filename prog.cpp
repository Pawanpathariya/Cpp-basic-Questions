// write a program to determine weather a number given by user is armstrong number or not (a number whose digit power sum ==num) 153 1^3 + 5^3 + 3^3 if three digit then power is 3  if 4 digit then power is 4
#include <iostream>
using namespace std;
int main(){
int num,last,sum=0,temp;
cout<<"Enter test number : ";
cin>>num;
temp=num;
while(temp>0){
   last= temp%10;
   temp=temp/10;
   sum+=last*last*last;
}
if(sum==num){
    cout<<"It is armstrong number";
}
else{
    cout<<"It is not armstrong number";
}
}