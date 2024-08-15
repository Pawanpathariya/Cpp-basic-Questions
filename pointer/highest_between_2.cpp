#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"Enter two number ";
cin>>n1>>n2;
int *p1=&n1;
int *p2=&n2;
if(*p1>*p2){
    cout<<"The highest is :"<<*p1;
}
else {
    cout<<"The highest is :"<<*p2;
}

}