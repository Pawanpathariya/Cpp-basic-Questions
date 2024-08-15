#include<iostream>
using namespace std;
int main(){
char msg[]="My name is Pawan Pathariya";
int count=0;
char *ptr=msg;

while(*ptr !='\0'){
    count++;
    ptr++;
}
cout<<"The total number of character :"<<count;
}
