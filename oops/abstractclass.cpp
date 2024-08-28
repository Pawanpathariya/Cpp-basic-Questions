//wap to create a abstract class name RBI having pure virtual function intrest rate and Repo Rate. create some child class name pnb,sbi. 

#include <iostream>
using namespace std;

class RBI{
public:
virtual void interest_rate()=0;//pure virtual
virtual void repo_rate()=0;//pure virtual

void info(){
cout<<"RBI regulate all financial institution ";
}
};

class SBI : public RBI{
public:
void interest_rate(){
cout<<"SBI interest rate is 7% "<<endl;
}
void repo_rate(){
cout<<"SBI repo rate is 7% "<<endl;
}
};

int main(){

/*
RBI *ptr;
SBI obj;
*ptr=&obj;
*/    
RBI *ptr= new SBI;
ptr->interest_rate();
ptr->repo_rate();
ptr->info();
}