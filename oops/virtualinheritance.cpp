#include<iostream>
using namespace std;

class GrandParent{
    public:
int number;
};
class Parent1: virtual public GrandParent{

};
class Parent2:virtual public GrandParent{

};
class Child : public Parent1, public Parent2{

};
int main(){
cout<<sizeof(GrandParent)<<endl;
cout<<sizeof(Parent1)<<endl;
cout<<sizeof(Parent2)<<endl;
cout<<sizeof(Child)<<endl;
Child obj;
obj.number=90;
obj.Parent1::number=44;
obj.Parent2::number=84;
cout<<obj.number<<endl;
}