//Write a program to calculate whether character is in lowercase or uppercase
#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a character : ";
    cin>>character;

    if(character>='A'&& character<='Z'){
        cout<<"Upper case";
}
else{
       cout<<"Lower case";
}
}