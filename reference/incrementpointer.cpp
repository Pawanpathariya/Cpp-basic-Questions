#include<iostream>
using namespace std;

void increment_10(int *p,int size){
for(int i=0;i<size;i++){
    p[i]+=10;
}
}
int main(){
int arr[]={22,55,6,33,1,2};
int size= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
increment_10(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
} 
}