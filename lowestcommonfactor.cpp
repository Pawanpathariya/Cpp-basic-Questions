#include<iostream>
using namespace std;
int main(){
	int num1,num2,max;
	cout<<"Enter two number ";
	cin>>num1>>num2;
	if(num1>num2){
		max=num1;
	}
	else{
		max=num2;
	}
	for(int i=max; ;i++){
		if(i%num1==0 && i%num2==0){
			cout<<"LCM is "<<i;
			break;
		}
	}
}
