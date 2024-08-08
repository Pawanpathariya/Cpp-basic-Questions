/* WAP to print whether a number is armstrong number or not
parameter -->int
return --->string (a message "yes" or "no")
*/

#include<iostream>
#include<cmath>
using namespace std;
 
 string armstrong(int num1){
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
		return "yes" ;
	}
	else{
		return "no" ;
	}
 }

int main(){
    int n1;
    cout<<"Enter a number ";
    cin>>n1;
   string result=armstrong(n1);
    cout<<"the digit is armstrong or not : "<<result;
}
