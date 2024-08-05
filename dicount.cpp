#include<iostream>
using namespace std;
int main(){
int price;
double dis,total;
cout<<"enter the price of cloth : ";
cin>>price;
if(price<=2000){
    dis=( float(price)/100)*5;
    total=price-dis;
    cout<<"You got discount "<<dis<<endl;
    cout<<"You have to pay : "<<total<<endl;
}
else if(price>=2001 && price<=5000){
    dis=( float(price)/100)*25;
    total=price-dis;
    cout<<"You got discount "<<dis<<endl;
    cout<<"You have to pay : "<<total<<endl;
}
else if(price>=5001 && price<=10000){
    dis=( float(price)/100)*35;
    total=price-dis;
    cout<<"You got discount "<<dis<<endl;
    cout<<"You have to pay : "<<total<<endl;
}
else if(price>=5000){
    dis=( float(price)/100)*50;
    total=price-dis;
    cout<<"You got discount "<<dis<<endl;
    cout<<"You have to pay : "<<total<<endl;
}
else{
    cout<<"You got no disount you  have to pay "<<price<<endl;
}
}
