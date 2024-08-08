/* WAP to print all armstrong number in given range.
parameter -->int,int(range)
return --->no return */
#include<iostream>
#include<cmath>
using namespace std;
 
 void armstrong(int num1){
   	int temp1,temp2,sum=0,last,count=0;
	temp1=num1;
	temp2=num1;
	while(temp1>0){
		temp1=temp1/10;
		count++;
	}
	while(temp2>0){
		last=temp2%10;
		sum=sum+pow(last,count);
		temp2=temp2/10;
	}
	if(num1==sum){
		cout<<num1<<" ";
	}
	
 }

int main(){
    int n1,n2;
    cout<<"Enter range";
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
    armstrong(i);
    }
}