/* WAP to print whether a number is palindrome number or not
parameter -->int
return --->string (a message "yes" or "no") */

#include<iostream>
using namespace std;
 
 string pallindrome(int num1){
    int sum=0;
    int last,temp=num1;

    while(num1>0){
        last=num1%10;
        sum=sum*10+last;
        num1/=10;
    }
    if(sum==temp){
    return "Yes";
    }
    else{
        return "No";
    }
 }

int main(){
    int n1;
    cout<<"Enter a number ";
    cin>>n1;
    string result = pallindrome(n1);
    cout<<"Result :"<<result;
}
