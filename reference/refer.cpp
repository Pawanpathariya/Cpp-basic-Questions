#include<iostream>
using namespace std;
int main(){
    int num1=90,num2=67;
    int &digit1=num1;
    digit1=900;
    cout<<num1;
}