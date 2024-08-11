/* WAP to print all prime number in given range. 
parameter -->int,int(range)
return --->no return */

#include<iostream>
using namespace std;

 void  prime(int n1,int n2) {
    bool flag;
   for(int i=n1;i<=n2;i++){
    flag=true;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
         flag=false;
        }
    }
    if(flag==true){
        cout<<i<<" ";}
   }
 }

int main(){
   int num,num2;
    cout<<"enter range  "<<endl;
    cin>>num>>num2;
    prime(num,num2);
}