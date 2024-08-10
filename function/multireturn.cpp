#include<iostream>
using namespace std;


int cal(int,int,string);

int main(){
    int n1,n2;
    string op;
    cout<<"Enter two number ";
    cin>>n1>>n2;
    cout<<"Enter op ";
   cin>>op;
    cal(n1,n2,op); //actual parameter
    int result = cal(n1,n2,op);
    cout<<result;
}
int cal(int num1,int num2,string op){  //formal parameter
  if(op=="add"){
return num1+num2;
  }
  if(op=="sub"){
return num1-num2;
  }
  if(op=="mul"){
return num1*num2;
  }
  if(op=="div"){
return num1/(float)num2;
  }
}