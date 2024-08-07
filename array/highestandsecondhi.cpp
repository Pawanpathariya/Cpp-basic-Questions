//WAP to find highest and second highest element in an array.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter range of array ";
cin>>n;
int arr[n];
//taking array elements
for(int i=0;i<n;i++){
    cout<<"enter a number at index "<<i<<endl;
    cin>>arr[i];
}
int highest=arr[1],secondhigh=arr[1];
for(int i=0;i<n;i++){
   if(highest<arr[i]){
    highest=arr[i];
   }
}

for(int i=0;i<n;i++){
    if(arr[i]<highest && arr[i]>secondhigh){
        secondhigh=arr[i];
    }
}
cout<<"highest is "<<highest<<endl;
cout<<"second highest is "<<secondhigh;
}