#include<iostream>
using namespace std;
int main(){
//  int marks[]={22,35,44,55,66};
//  cout<<marks[1]<<endl;
//  marks[1]=marks[1]+50;
//  cout<<marks[1];
//  
//  marks[300]=345; //undefine behaviour
//  cout<<marks[30];
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cout<<"Enter a number at index"<<i<<" :";
	cin>>arr[i];
}
for(int i=0;i<n;i++){
	cout<<"number at index "<<i<<"is : "<<arr[i]<<endl;
}
}


 
