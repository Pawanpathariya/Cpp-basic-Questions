#include<iostream>
using namespace std;
int main(){
int n,i=0,temp;
cout<<"Enter range of array ";
cin>>n;
int arr[n];

while(i<n){
    cout<<"Enter a number";
    cin>>temp;
    if(temp%2==0){
        arr[i]=temp;
        i++;
    }
}


for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
}
}