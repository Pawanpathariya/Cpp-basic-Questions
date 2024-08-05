// Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%
#include <iostream>
using namespace std;
int main(){
    int cost,discount_price,quantity=70;
    cout<<"Enter price of pen : ";
    cin>>cost;
    int total=cost*quantity;
    int final_cost;
    cout<<"The total of 70 pen is : "<<total<<endl;
    if(total>1000){
    discount_price=total*(20.0/100);
     final_cost=total-discount_price;
    cout<<"The discount you got 20% so price is : "<<final_cost;
    }
    else{
    discount_price=total*(10.0/100);
    final_cost=total-discount_price;
    cout<<"The discount  you got 10% so price is : "<<final_cost;
    }
}