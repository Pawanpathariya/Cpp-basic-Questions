#include<iostream>
using namespace std;
class School{
private:
int *roll;
string school_name;

public:
//parameterized constructor
School(int r, string sch){
    school_name=sch;
    roll=new int;
    *roll=r;
}
//shallow copy constructor
School (const School &s1){
    school_name=s1.school_name;
    roll=s1.roll;
}

/*
//deep  copy constructor
School (School &s1){
    school_name=s1.school_name;
    roll=new int;
    *roll=*s1.roll;
}*/

void changeroll(int d){
    *roll=d;
}
void display(){
    cout<<"The school name "<<school_name<<" roll number "<<*roll<<endl;
}

};

int main(){
School s1(101,"kvs");
School s2(s1);
s1.display();
s2.display();
s2.changeroll(102);
s1.display();
s2.display();
}
