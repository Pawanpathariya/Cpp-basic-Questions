//WAP to copy the elements of one array into another array.
#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter range of array ";
cin>>n;
int arr[n];
int brr[n];
//taking array elements
for(int i=0;i<n;i++){
    cout<<"enter a number at index "<<i<<endl;
    cin>>arr[i];
}
//copy element of array1 to array2
for(int i=0;i<n;i++){
   brr[i]=arr[i];
}

for(int i=0;i<n;i++){
    cout<<brr[i]<<" ";
}
}