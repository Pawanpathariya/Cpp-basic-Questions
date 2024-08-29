#include<iostream>
using namespace std;

class School{

    public:
void add(int n1,int n2){
    cout<<"With int int \n";
    cout<<"Addition :"<<n1+n2<<endl;
}
void add(string n1,string n2){
    cout<<"With string string \n";
    cout<<"Addition :"<<n1+n2<<endl;
}

};
int main(){
    //function overloading. compile time polymorphism 
    School obj;
    obj.add(12,45);
    obj.add("function ","overloading");
}