// Write a c++ class named animal constructed by a name, no_legs, category (herbivores, carnivores and omnivores)and two methods  all_details() and category () . Create some instance and display result.
#include<iostream>
using namespace std;
class Animal {
public:
    string name, category;
    int no_legs;

      
      Animal(){
        name="";
        no_legs=0;
        category="";
      }

      Animal(string n,int leg,string c){
      name=n;
      no_legs=leg;
      category=c;
      }
    void insert() {
        cout << "Enter the name of the animal: ";
        cin>>name;
        cout << "Enter the number of legs: ";
        cin >> no_legs;
        cout << "Enter the category (herbivores, carnivores, omnivores): ";
        cin>>category;
    }
    void all_details(){
        cout << "Name of animal is: " << name << endl;
        cout << "Number of legs of animal is: " << no_legs << endl;
    }
    void animalcategory() {
        cout << "Category of animal is: " << category <<"\n"<< endl;
    }
};

int main() {
    Animal obj1;
    obj1.insert();
    obj1.all_details();
    obj1.animalcategory();
    Animal obj2("Lion",4,"Carnivores");
   obj2.all_details();
    obj2.animalcategory();
    Animal obj3("Elephant",4,"Herbivores");
   obj3.all_details();
    obj3.animalcategory();
}