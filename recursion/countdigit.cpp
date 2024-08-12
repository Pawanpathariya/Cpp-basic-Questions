//Write a recursive function to count the number of digits in a positive integer.

#include<iostream>
using namespace std;
int count=0;
int countdigit(int n){
	if(n==0)
	return count;
   count++;
   countdigit(n/10);
}
int main(){
int n;
cout<<"Enter a number ";
cin>>n;
cout<<countdigit(n);
}
