#include<iostream>
using namespace std;
int main(){
    int count=1;
    char alpha ='A';
    while(alpha<='Z'){
        if(count%4==0){
            cout<<" $ ";
        }
        else{
            cout<<alpha;
            alpha++;
        }
        count++;
    }
}