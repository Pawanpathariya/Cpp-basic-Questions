/*Q.1) WAP to create a array of n integer elements. And  perform following operations.
a) display
b) display in reverse order.
c) display alternate elements from starting index.
d)display elements which are multiple of 7
e) add them all and show result
f) find avg. */
#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter range of array ";
cin>>n;
int arr[n];
//taking array elements
for(int i=0;i<n;i++){
    cout<<"enter a number at index "<<i<<endl;
    cin>>arr[i];
}

//print array element
  cout<<"array elements are : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//reverse array print
   cout<<"reverse array : ";
for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
}
cout<<endl;
//print array element
  cout<<"array alternate elements : ";
for(int i=0;i<n;i=i+2){
    cout<<arr[i]<<" ";
}
cout<<endl;
//print multiple of 7
  cout<<"multiple of seven : ";
for(int i=0;i<n;i++){
    if(arr[i]%7==0)
    cout<<arr[i]<<" ";
}
cout<<endl;

//print sum of all
  cout<<"sum of all : ";
for(int i=0;i<n;i++){
 sum=sum+arr[i];
}
cout<<"sum = "<<sum;

//average
cout<<endl;
cout<<"avearge of array element is :"<<sum/n;
}