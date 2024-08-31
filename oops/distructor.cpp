#include<iostream>
using namespace std;
class Parent{
    public:
   Parent(){
    cout<<"Parent constructor \n";
   }

  virtual ~ Parent(){
    cout<<"Parent destructor \n";
   }
};
class Child :public Parent{
    public:
   Child(){
    cout<<"Child constructor \n";
   }

   ~Child(){
    cout<<"Child destructor \n";
   }
};
class Grandchild:public Child{
    public:
   Grandchild(){
    cout<<"Grandchild constructor \n";
   }

   ~Grandchild(){
    cout<<"Grandchild destructor \n";
   }
};

int main(){
Parent *basepointer=new Grandchild;
delete basepointer;
}
