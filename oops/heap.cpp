//wap to create a class a name employee having data member eid,ename,edob,edep.esal.  and having method parameteried constructor,display,createsalary,filterrecords
#include<iostream>
using namespace std;

class Employee{
public:
int eid;
string ename,dob,dep;
double sal;
Employee(){
      eid=0;
  ename="";
  dob="";
  dep="";
  sal=0;
}
Employee(int id, string name, string dob, string d,double s){
  eid=id;
  ename=name;
  dob=dob;
  dep=d;
  sal=s;
}
void setter(){
    cout<<"Enter id :";
    cin>>eid;
    cout<<"Enter name : "<<endl;
    cin>>ename;
    cout<<"Enter DOB "<<endl;
    cin>>dob;
    cout<<"enter a department "<<endl;
    cin>>dep;
    cout<<"Enter a salary "<<endl;
    cin>>sal;
}
void display(){
    cout<<"Employee id :"<<eid<<" Employee name :"<<ename<<endl;
    cout<<"DOB :" <<dob<<" department : "<<dep<<endl;
    cout<<"Salary :"<<sal<<endl;
}

};

int main(){
Employee *obj1 = new Employee(101,"Pawan","09/12/2003","IT",25000);
Employee *obj2 =new Employee;
obj2->setter();
obj1->display();
obj2->display();
}