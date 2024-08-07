//WAP to display all unique elements of an array
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
//print array element
  cout<<"array elements are : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
int new_arr[n]={arr[0]};
int i=1;
cout<<endl;
//unique element
bool flag;
cout<<"Array unique elements ";
for(int j=1;j<n;j++){
  flag=false;
  for(int k=0;k<i;k++){
    if(arr[j]==arr[k]){
    flag=true;
    break;
    }
  }
  if(flag==false){
    new_arr[i]=arr[j];
    i++;
  }
}
for(int l=0;l<i;l++){
  cout<<new_arr[l]<<" ";
}
}