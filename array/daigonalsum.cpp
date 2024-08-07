/*Addition of  1st diagonal element  00+11+22  -> 9
Addition of  2nd diagonal element 02 +11+20 ->  8  
  1 5 1
  2 6 9
  1 11 2
8        9
*/

#include<iostream>
using namespace std;
int main(){ 
int arr[3][3]={1,5,1,2,6,9,1,11,2};
    int sum=0,secsum=0;
    int rowstart=0,colend=2; 
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
   if(i==j){
    sum=sum+arr[i][j];
   }
if(i==rowstart && j==colend){
 secsum=secsum+arr[i][j];
 rowstart++;
 colend--;
}
    }
    }
    cout<<"sum of first daigonal "<<sum<<endl;
    cout<<"sum of second daigonal "<<secsum<<endl;

}