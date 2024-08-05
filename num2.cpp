/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not*/
#include<iostream>  
using namespace std;
int main(){
int class_held,class_attend;
cout<<"Number of class held : ";
cin>>class_held;
cout<<"Number of class attend : ";
cin>>class_attend;

int percentage_class_attend=(class_attend/float(class_held))*100;
cout<<"your total percentage of attendence is "<<percentage_class_attend<<endl;
if(percentage_class_attend>=75){
    cout<<"You are eligible for sit in eaxam";
}
else{
     cout<<"You are not eligible for sit in eaxam";
}
}