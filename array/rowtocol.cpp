/*
WAP to apply transpose in 2-d array (row into column and column into row)

                          1         1         2                               
                          5         6         7                              1        5       5      4
                          5         5         5                              1        6       5      6
                          4         6         7                              2        7       5      7

*/
#include<iostream>
using namespace std;
int main(){ 
    int arr1[4][3]={1,1,2,5,6,7,5,5,5,4,6,7};
    int arr2[3][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j]<<" ";
}
cout<<endl;
    }
}