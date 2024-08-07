#include<iostream>
using namespace std;
int main(){
int arr[5]={0,1,0,3,12};
int j=0;
for(int i=0;i<5;i++){
   if(arr[i]!=0){
    arr[j]=arr[i];
    j++;
   }
}
while(j<5){
arr[j]=0;
j++;
}

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

}