// Write a recursive function to calculate the sum of the first n natural numbers.
#include<iostream>
using namespace std;
int sum=0;
int recsum(int n){
	if(n==0)
	return sum;
   sum=n+sum;
    recsum(n-1);
}
int main(){
int n;
cout<<"Enter a number ";
cin>>n;
cout<<recsum(n);
}
