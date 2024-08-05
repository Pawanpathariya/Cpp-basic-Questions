#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"enter marks : ";
cin>>marks;
if(marks>=90){
   if(marks==100){
        cout<<"Perfect";
    }
    else{
    cout<<"Excellent";}

}

else if(marks<90 && marks>=75){
   cout<<"Very good";
}
else if(marks<75 && marks>=50){
    cout<<"good";
}

else if(marks<50 && marks>=35){
    cout<<"need improvement";
}

else if(marks<35){
    cout<<"Fail";
}
}