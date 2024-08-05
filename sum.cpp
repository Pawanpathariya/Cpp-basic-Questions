// write a program to find the sum of n natural number start from 1 and also display the given format

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
cout<<"Enter number till you want sum : ";
cin>>n;
for(int i=1;i<=n;i++){
sum+=i;
cout<<i;
if(i<n){
cout<<" + ";}
}
cout<<" = "<<sum;
}