#include<iostream>
using namespace std;
int main(){
	int num1,num2,min;
	bool flag=false;
	cout<<"Enter two number ";
	cin>>num1>>num2;
if(num1>num2)
min=num2;
else
min=num1;
	for(int i=min;i>=2;i--){
		if(num1%i==0 && num2%i==0){
			cout<<"HCF is "<<i;
			flag=true;
			break;
		}
	}
	if(flag==false){
		cout<<"HCF is not possible";
	}
}
