#include<iostream>
using namespace std;
 int main(){ 
    string f1="";
   /* string f2="banana";
    string f3="pineapple";
    // f1.append(f2);
    // cout<<f1<<endl;
   f1.append(f2.append(f3));
   cout<<f1<<endl; 
   f1.push_back('a');
   cout<<f1<<endl;
   f1.pop_back();
   cout<<f1<<endl;*/
   for(int i=1;i<=20;i++){
    f1.push_back('a');
    cout<<"size : "<<f1.size()<<" capacity : "<<f1.capacity()<<endl;
   }
 }
