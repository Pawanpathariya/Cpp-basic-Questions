#include<iostream>
using namespace std;
int main(){
    int n,index;
    cout<<"Enter length of array ";
    cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cout<<"Enter element at index "<<i<<" :";
        cin>>arr[i];
     }
     try{
       cout<<"Enter the index you want to access ";
       cin>>index;
        if(index>=n || index<0){
            throw index;
        }
      cout<<"Index number "<<index<<" "<<arr[index];
     }
     catch(int n1){
        cout<<"You entered index number : "<<n1<<endl;
        cout<<"index out of bond ";
     }
}