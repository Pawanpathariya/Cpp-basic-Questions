#include<iostream>
using namespace std;
int main(){
int water_consum;
cout<<"Enter water consumed in galloms : ";
cin>>water_consum;
if(water_consum>45 && water_consum<75){
    cout<<"Your rate in rs is : 475";
}

else if(water_consum >75 && water_consum<=125){
    cout<<"Your rate in rs is : 750";
}
else if(water_consum >125 && water_consum<=200){
    cout<<"Your rate in rs is : 1225";
}
else if(water_consum>200 && water_consum<=350){
    cout<<"Your rate in rs is : 1650";
}
else if(water_consum>350){
    cout<<"Your rate in rs is : 2000";
}
else{
    cout<<"You don't have to pay anything ";
}
}