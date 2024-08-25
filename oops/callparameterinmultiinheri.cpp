// calling base class constructor in derived class
#include<iostream>
using namespace std;

	class University{
					protected:
						string university_name;
						int number_of_college_affilated;
					public:
						University(string un, int numC){
							university_name=un;
							number_of_college_affilated=numC;
						}
						
	};
				
			class College:public University{
					protected:
						string college_name;
						public:
							College(string un, int numC, string CN): University(un,numC){
								college_name=CN;
							}
			};
				
				 class Student: public College{
					protected:
						string student_name;
					public:
						Student(string un, int numC,string CN, string name):College(un,numC,CN){
							student_name=name;
						}
						void display(){
							cout<<"University Name: "<<university_name<<endl;
							cout<<"Number of college affilated: "<<number_of_college_affilated<<endl;
							cout<<"College Name: "<<college_name<<endl;
							cout<<"Student Name: "<<student_name<<endl;
						}
				};
     int main(){
		Student obj("RGPV",10000,"NRI","Pawan");
        obj.display();
        return 0;
     }