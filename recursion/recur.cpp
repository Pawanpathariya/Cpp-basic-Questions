#include<iostream>
using namespace std;
/* void f1(int n){
    if(n>5)
    return;
    cout<<"This is function :"<<n<<endl; 
    f1(n+1); //tail
} */
void f1(int n){
    if(n>5)
    return;
    f1(n+1);  //head
     cout<<"This is function :"<<n<<endl; 
}

int main(){
    f1(1);
}