/*W.A.P to read a value and find out the no currencies piece wise required to withdraw that amount.
For Example 
No = 7888
2000 * 3 =6000
500  * 3  =1500
200 * 1 =200
100 * 1 =100
50  * 1 = 50
20 * 1 = 20
10 * 1 = 10
5 * 1 = 5
2 * 1  = 2
1 *  1  = 1
Total   is  = 7888*/


#include<iostream>
using namespace std;
int main(){
    int num,amount,note,totalnote=0;
    cout<<"Enter a amount : ";
    cin>>amount;
 int total=amount;

 if(amount/2000!=0){
 num=amount/2000;
 note=2000*num;
 amount-=note;
 cout<<"2000 *"<<num<<"= "<<note<<endl;
 totalnote=totalnote+num;
 }

 if(amount/500!=0){
 num=amount/500;
 note=500*num;
 amount-=note;
 cout<<"500 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

if(amount/200!=0){
 num=amount/200;
 note=200*num;
 amount-=note;
 cout<<"200 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

 if(amount/100!=0){
 num=amount/100;
 note=100*num;
 amount-=note;
 cout<<"100 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

if(amount/50!=0){
 num=amount/50;
 note=50*num;
 amount-=note;
 cout<<"50 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

 if(amount/20!=0){
 num=amount/20;
 note=20*num;
 amount-=note;
 cout<<"20 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

 if(amount/10!=0){
 num=amount/10;
 note=10*num;
 amount-=note;
 cout<<"10 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

 if(amount/5!=0){
 num=amount/5;
 note=5*num;
 amount-=note;
 cout<<"5 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }

 if(amount/2!=0){
 num=amount/2;
 note=2*num;
 amount-=note;
 cout<<"2 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }
 
 if(amount/1!=0){
 num=amount/1;
 note=1*num;
 amount-=note;
 cout<<"1 *"<<num<<"= "<<note<<endl;
  totalnote=totalnote+num;
 }
 cout<<"total = "<<total<<endl;
 cout<<"Total note :"<<totalnote;
}