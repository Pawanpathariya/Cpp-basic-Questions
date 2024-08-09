/* WAP to concatenate name and surname of a user having one space
between them
parameter -->name,surname
return --->no return */
#include<iostream>
using namespace std;

 void concarnate(string name, string surname){
    cout<<"Your full name is : "<<name +" " +surname<<endl;
 }

int main(){
    string name,surname;
    cout<<"enter your name "<<endl;
    cin>>name;
    cout<<"enter your surname "<<endl;
    cin>>surname;

    concarnate(name,surname);

}