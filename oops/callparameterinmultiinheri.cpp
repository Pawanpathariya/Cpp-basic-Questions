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
				