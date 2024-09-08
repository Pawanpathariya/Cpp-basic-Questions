/* WAP to demostrate exception handling with the help of program take two input from user again and again untill user type 'e'
throw an exception if
1)if the result of addition is going to be greater than 100
2)if the user entered any charater other then 'e' or 'y';   */
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char choice = 'y';
    try
    {
        while (choice == 'y')
        {
            cout << "Enter two number ";
            cin >> n1 >> n2;
            if (n1 + n2 > 100)
            {
                throw n1 + n2;
            }
            cout << "Sum " << n1 + n2 << endl;
            cout << "Do you want to continue ";
            cin >> choice;  
            if (choice != 'y' && choice != 'e')
            {
                throw choice;
            }
        }
    }
    // we can also use ... operator to catch all (ellipsis operator ...)
    catch (...)
    {
        cout << "Exception occur ";
    }
    /*
    catch(int sum){
        cout<<"Exception "<<sum <<" sum is more than 100 ";
    }
    catch(char ch){
        cout<<"Exception "<<ch <<" is not valid choice ";
    }*/
}