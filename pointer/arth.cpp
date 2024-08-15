#include<iostream>
using namespace std;
int main(){
int n1=90,n2=88;
int *p1=&n1;
int *p2=&n2;
cout<<"Address of n 1 "<<p1<<endl;
cout<<"Address of n 2 "<<p2<<endl;
p1=p1-1;
// p2=p2+1;
cout<<"Address of n 1 "<<p1<<endl;
cout<<"Address of n 2 "<<p2<<endl;
cout<<"Add "<<*p1+*p2;
}