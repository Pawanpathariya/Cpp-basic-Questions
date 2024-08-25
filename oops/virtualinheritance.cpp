#include<iostream>
using namespace std;

class GrandParent{
    public:
int number;
};
class Parent1: virtual public GrandParent{

};
class Parent2:virtual public GrandParent{

};
