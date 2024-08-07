//2d array declaration : data_type array_name[size of row][size of coloumn];

#include<iostream>
using namespace std;
int main(){ 
   //declaration and initialitation int arr[4] [5] {11,12,12,3,35,6};
 /* int marks[4][3]={14,44,5,6,77,8,99,4,55,89} or {{12,44,5},{44,5},{98,45,4},{55,5,6}};
   cout<<marks[1][1]<<endl;
   cout<<marks[3][0]<<endl;
   cout<<marks[3][2]<<endl; */

   //int marks[4][3]={{12},{6},{99,4,55},90,56,56,23} it through error because it exced limit

//write a program to create and display 2d array 
    int n,m;
    cout<<"Enter row and column ";
   cin>>n>>m;
   int arr[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<"enter value at index at : "<< i<< j <<" ";
        cin>>arr[i][j];
    }
   }

    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
  cout<<"Marks at index "<<i<<j<<" "<<arr[i][j] <<" ";
    } 
    cout<<endl;
    }

}