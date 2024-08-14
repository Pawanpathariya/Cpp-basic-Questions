// WAP to swap the value of 2 variable with each other using call by value and call by reference.

#include<iostream>
using namespace std;

void call_by_value(int n1,int n2){
 n1=n1+n2;
 n2=n1-n2;
 n1=n1-n2;
}
void call_by_reference(int &n1,int &n2){
 n1=n1+n2;
 n2=n1-n2;
 n1=n1-n2;
}

int main(){
    int n1,n2;
    cout<<"Enter two number ";
    cin>>n1>>n2;
    call_by_value(n1,n2);
    cout<<"call by value n1:"<<n1<<" n2:"<<n2<<endl;
    call_by_reference(n1,n2);
    cout<<"call by reference n1:"<<n1<<" n2:"<<n2<<endl;
}