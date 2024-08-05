 //Write a program to show day of week according to user input.
 #include<iostream>
using namespace std;
int main(){
int day;
cout<<"Enter day in number : ";
cin>>day;

switch (day)
{
case 1:
cout<<"monday";
    break;

case 2:
cout<<"tuesday";
    break;

case 3:
cout<<"wednesday";
    break;

    case 4:
cout<<"thursday";
    break;

    case 5:
cout<<"friday";
    break;

    case 6:
cout<<"saturday";
    break;

case 7:
cout<<"sunday";
    break;

default:
cout<<"Select between 1-7 because there are only 7 day in a week " ;
    break;
}

}