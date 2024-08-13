#include<iostream>
using namespace std;
void callbyvalue(int n1){
 n1++;
cout<<n1<<endl;
}
int main(){
int num=90;
callbyvalue(num);
cout<<num<<endl;
}