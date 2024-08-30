
#include<iostream>
using namespace std;
class Bank{
private:
int balance;
string name;

public:
Bank(int bal , string n){
balance=bal;
name=n;
}
void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Balance "<<balance<<endl;
}
friend class Phonepe;//declaration
};

class Phonepe{
public:
void deposite(Bank &obj,int amount){
    obj.balance=obj.balance+amount;
}
void withdraw(Bank &obj,int amount){
    obj.balance=obj.balance-amount;
}
};

int main(){
Bank obj(250000,"pawan");
obj.display();
Phonepe obj_ph;
obj_ph.deposite(obj,25000);
obj.display();
obj_ph.withdraw(obj,25000);
obj.display();
}
