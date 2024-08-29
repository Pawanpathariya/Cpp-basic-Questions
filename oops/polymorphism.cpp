#include<iostream>
using namespace std;
  
void add(int n1,int n2){
    cout<<"With int int \n";
    cout<<"Addition "<<n1+n2<<endl;
}
void add(double n1,int n2){
    cout<<"With double int \n";
    cout<<"Addition "<<n1+n2<<endl;
}

void add(int n1,int n2,int n3){
    cout<<"int int int \n";
    cout<<"Addition "<<n1+n2+n3<<endl;
}
int main(){
    //function overloading compile time polymorphism
add(12,45);
add(12.2,45);
add(12.2,45.2);
add(12,45,2);
}