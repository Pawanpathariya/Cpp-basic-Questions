#include<iostream>
using namespace std;
class GrandParent{
public:
void f5(){
    cout<<"Funct 5 from grand parent ";
}
};
class Parent1:public virtual GrandParent {
public:
int data;
void f1(){
    cout<<"this is f1 of parent 1";
}
};
class Parent2:public virtual GrandParent{
public:
int data;
void f1(){
    cout<<"this is f1 of parent 1";
}
};

class Child:public Parent1,public Parent2{

};

int main(){
Child obj;
obj.f5();//it is call due to virtual inheritance
obj.Parent1::f1(); //it is call due to scope resolution operator
}
