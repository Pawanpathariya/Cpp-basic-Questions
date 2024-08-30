#include <iostream>
using namespace std;
class Bank {
private:
    int balance;
    string name;
public:
    Bank(int bal, string nm) {
        balance=bal;
        name=nm;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    friend void deposit(Bank &obj, int amount);
    friend void withdraw(Bank &obj, int amount);
};
void deposit(Bank &obj, int amount) {
    obj.balance += amount;
}
void withdraw(Bank &obj, int amount) {
    obj.balance -= amount;
}
int main() {
    Bank obj(250000, "Pawan");
    obj.display();
    deposit(obj,8000);
    obj.display();
    withdraw(obj, 25000);
    obj.display();
    return 0;
}
