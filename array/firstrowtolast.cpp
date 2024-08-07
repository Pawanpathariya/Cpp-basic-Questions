/*WAP to swap the data of first row  to last row of matrix .

       Input    
                          1         1         2                           
                          5         6         7
                          5         5         5 
     output
                          5          5         5
                          5          6         7
                          1          1          2
*/
#include<iostream>
using namespace std;
int main(){ 
    int arr1[3][3]={1,1,2,5,6,7,5,5,5};
    int arr2[3][3];
    int row=2,col;
    for(int i=0;i<3;i++){
           col=0;
        for(int j=0;j<3;j++){
            if(i==0 || i==3-1){
            arr2[row][col]=arr1[i][j];

            }
            else{
                arr2[i][j]=arr1[i][j];
            }
            col++;
        }
        row--;
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
      }
}