#include <iostream>
using namespace std;
class Base {
public:
    // Virtual method
    virtual void display() {
        cout << "Display from Base class" <<endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Override the base class method
    void display(){
        cout << "Display from Derived class" <<endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display();            
    return 0;
}
