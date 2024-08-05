#include<iostream>
using namespace std;
int main(){
    //  int arr3[5];
    //  arr3[0]=23;
    //  cout<<arr3[0];

    //  int array2[5]={2,3,22.78,5,8};
    //  convert double into int data loss
    // cout<<array2[2];


     //  int array1[5]={2,3,"apple",5,8};
    //  error
    // cout<<array1[2];

    int arr[5]={2,3,25.78,5,8};
    // convert A into ascii value but error in latest compiler
    cout<<arr[2];

     double array[5]={2,3,'A',5,8};
    // convert A into ascii value
    cout<<array[2];
    
    //in latest compiler bigger to smaller possible but not smaller to biger it can typecast data as double to int possible double to char posssible int to char possible but int to double show error 
}
