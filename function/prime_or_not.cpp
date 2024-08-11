/* WAP to print whether a number is prime number or not.

parameter -->no
return --->return string ("yes" or "no") */
#include<iostream>
using namespace std;

string prime(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
  bool flag = true;
    for(int j=2;j<=num/2;j++){
        if(num%j==0){
         flag=false;
        }
    }
    if(flag==true){
        return "yes";
        }
        else{
            return "no";
        }
   }

int main(){
 string result = prime();
 cout<<result;
}
