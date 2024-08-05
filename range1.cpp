//write a program to print table from range 15-25 
#include <iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter starting range :";
    cin>>start;
    cout<<"Enter ending range :";
    cin>>end;

   for(int i=start;i<=end;i++){
    cout<<"Table of "<<i<<endl;
    for(int j=1;j<=10;j++){
        cout<<i<<" X "<<j<<" = "<<i*j<<endl;
    }
    cout<<endl;
   }
}