/* WAP to print all palindrome number in given range
parameter -->int,int(range)
return --->no return */


#include<iostream>
using namespace std;
 
 void pallindrome(int num1){
    int sum=0;
    int last,temp=num1;

    while(num1>0){
        last=num1%10;
        sum=sum*10+last;
        num1/=10;
    }
    if(sum==temp){
    cout<<temp<<" ";
    }
 }

int main(){
    int n1,n2;
    cout<<"Enter range ";
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
    pallindrome(i);
    }
}
