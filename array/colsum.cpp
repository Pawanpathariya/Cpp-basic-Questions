#include<iostream>
using namespace std;
int main(){ 
    int sum;

int arr[3][3]={1,5,1,2,6,9,1,11,2};

    for(int i=0;i<3;i++){
    	sum=0;
    for(int j=0;j<3;j++){
   cout<<arr[j][i]<<" ";
   sum=sum+arr[j][i];
    } 
    cout<<"Sum of col "<<i<<" "<<sum;
    cout<<endl;
    }

}
