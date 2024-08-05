// write a program to determine the highest and lowest among n number
//write a program to n input from user and add all of them  b)  and also find sumof all even , odd number seperately c) finally add all number between range 40-60  and  also show there count
#include <iostream>
using namespace std;
int main(){
int n,num,sum=0,sumeven=0,sumodd=0,rangesum=0,count=0;
cout<<"Enter value of n : ";
cin>>n;

for(int i=1;i<=n;i++){
    cout<<"Enter a number: ";
    cin>>num;
    sum+=num;
    if(num%2==0){
 sumeven+=num;
    }
    else{
        sumodd+=num;
    }
    if(num>=40 && num<=60){
        rangesum+=num;
        count++;

    }
}
cout<<"Sum : "<<sum<<endl;
cout<<"Even sum : "<<sumeven<<endl;
cout<<"Odd sum : "<<sumodd<<endl;
cout<<"Sum between range :"<<rangesum<<endl;
cout<<"Total count between range : "<<count;
}