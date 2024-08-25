#include<iostream>
using namespace std;

class System{
    public:

    string name,category;
    int hard_disk,ram;
    
    System(){  //default constructor 
         cout<<"Default \n";
        name="";
        category="";
        hard_disk=0;
        ram=0;
    }
  
   System(string n,string c,int hd ,int rm ){ //parametrized constructor
    cout<<"Parameter \n";   
    name=n;
    category=c;
    hard_disk=hd;
    ram=rm;
   
   }

    void insert(){
        cout<<"enter a name and category ";
        cin>>name>>category;
        cout<<"mention hd and ram ";
        cin>>hard_disk>>ram;
    }
    void display(){
        cout<<"Name "<<name<<" categories "<<category<<endl;
        cout<<"ram "<<ram<<" hard disk "<<hard_disk<<endl;
    }

    void input(){
        cout<<name<<"  takes some input \n";
    }

    void processing(){
        cout<<name<<" processing  \n";
    }

    void output(){
        cout<<name<<" generate some input \n";
    }
};
int main(){
    System sys1;
     sys1.insert();
     sys1.display();
    // sys1.input();
    // sys1.processing();
    // sys1.output();
    System sys2("Lenovo" , "Laptop ",1,16);
    sys2.display();
}
