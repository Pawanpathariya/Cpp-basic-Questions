#include<iostream>
using namespace std;

class Parent{
private:
void f1(){
    cout<<"This is s function f1 of class Parent\n";
}
protected:
void f2(){
    cout<<"This is s function f2 of class Parent \n";
}
public:
void f3(){
    cout<<"This is s function f3 of class Parent \n";
}
};

class Child :public Parent{
    public:
void f4(){
f2();//taking indirectly access of f2()
}
};
int main(){
 Child obj;
 obj.f3();
 obj.f4();
}