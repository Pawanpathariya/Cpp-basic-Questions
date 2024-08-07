//WAP to find lowest and second lowest element in an array.
#include<iostream>
using namespace std;
int main(){
int n,sumeven=0,sumodd=0,countodd=0;
cout<<"Enter range of array ";
cin>>n;
int arr[n];
//taking array elements
for(int i=0;i<n;i++){
    cout<<"enter a number at index "<<i<<endl;
    cin>>arr[i];
}

int lowest=arr[1],secondlow=arr[1];
for(int i=0;i<n;i++){
   if(lowest>arr[i]){
    lowest=arr[i];
   }
}

for(int i=0;i<n;i++){
    if(arr[i]>lowest && arr[i]<secondlow){
        secondlow=arr[i];
    }
}
cout<<"lowest is "<<lowest<<endl;
cout<<"second lowest is "<<secondlow;
}