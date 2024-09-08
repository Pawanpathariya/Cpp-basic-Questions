#include<iostream>
using namespace std;
int main(){
     int num,dino;
     try{
        cout<<"Enter numerator and denomerator ";
        cin>>num>>dino;

        if(dino==0){
            throw dino;
        }

        cout<<"Division :"<<num/(double)dino<<endl;
     }
     catch(int n1){
        cout<<"You entered dinomerator as : "<<n1<<endl;
        cout<<"Dinominator can't be zero ";
     }
}