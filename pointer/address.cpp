#include<iostream>
using namespace std;
int main(){
int num=90;
double mar=34.25;
char ch= 'A';

int *p1=&num;
double *p2=&mar;
*p1=100;
cout<<*p1<<endl;
cout<<&num<<endl;
}