 // WAP to find sum of all even element in an array.  WAP to find sum of all odd element in an array.
//WAP to count all odd element in an array, and display result
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
for(int i=0;i<n;i++){
   if(arr[i]%2==0){
    sumeven=sumeven+arr[i];
   }
   else{
    sumodd=sumodd+arr[i];
    countodd++;
   }
}
cout<<"Sum of even number is "<<sumeven<<endl;;
cout<<"Sum of odd number is "<<sumodd<<endl;
cout<<"total odd number are "<<countodd;
}