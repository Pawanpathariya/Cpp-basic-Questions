#include<iostream>
using namespace std;
class Cybrom{
private:
int enroll;
string st_name;
static string ins_name;
public:
Cybrom(int enr,string name){
enroll=enr;
st_name=name;
}
 static void change_institute(string str){
    ins_name=str;
}
void display(){
    cout<<"Student name "<<st_name<<endl;
    cout<<"institute name "<<ins_name<<endl;
    cout<<"enroll number "<<enroll<<endl;
}
};
string Cybrom::ins_name="Cybrom ";
int main(){
     Cybrom obj1(202,"pawan"),obj2(203,"Ram");
     obj1.display();
     obj2.display();
     // obj1.change_institute("Cybrom infotech"); unhealthy coding 
     Cybrom::change_institute("Cybrom infotech");
     obj1.display();
     obj2.display();
}