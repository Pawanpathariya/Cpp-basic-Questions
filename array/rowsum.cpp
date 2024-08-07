//create a new array from existence arr of size 3 3 

#include<iostream>
using namespace std;
int main(){ 
    int sum=0;

int arr[3][3]={1,5,1,2,6,9,1,11,2};
int new_arr[3][3];
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){
            new_arr[i][j]=arr[i][j];
        }
        else{
            new_arr[i][j]=0;
        }
    } 
    }
      cout<<"Original array : \n";
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }

    cout<<"Daigonal array : \n";
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<new_arr[i][j]<<" ";
    }
    cout<<endl;
 }
 
}