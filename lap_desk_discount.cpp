#include<iostream>
using namespace std;
int main(){
int price,amount;
char type;
double discount;
cout<<"Enter type of system laptop or desktop pc for laptop 'l' and for pc 'd' : ";
cin>>type;
cout<<"Enter price of system : ";
cin>>price;
if(price>0 && price<=25000){
if(type=='l'){
 discount=((float)price/100)*0;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
else if(type=='d'){
    discount=((float)price/100)*5;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
} 

else if(price>25000 && price<=57000){
if(type=='l'){
 discount=((float)price/100)*5;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
else if(type=='d'){
    discount=((float)price/100)*7.5;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
}

else if(price>57000 && price<=100000){
if(type=='l'){
 discount=((float)price/100)*7.5;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
else if(type=='d'){
    discount=((float)price/100)*10;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
}

else if(price>=100000){
if(type=='l'){
 discount=((float)price/100)*10;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
else if(type=='d'){
    discount=((float)price/100)*15;
    amount=price-discount;
    cout<<"you got discount of "<<discount<<" you have to pay "<<amount;
}
}
}

