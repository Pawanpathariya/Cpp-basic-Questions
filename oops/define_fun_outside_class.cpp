#include<iostream>
using namespace std;
class Bank{
private:
int balance;
string name;
static int count;
public:
Bank(int bal,string nm){
    balance=bal;
    name=nm;
    count++;
}
void display(){
    cout<<"Name :"<<name<<" Balance:"<<balance<<endl;
}
static void number_cou();
};
int Bank::count=0;

 void Bank::number_cou(){
    cout<<count;
}
int main(){
Bank obj(40000,"ajay"),obj2(4000,"vijay");
Bank::number_cou();
}