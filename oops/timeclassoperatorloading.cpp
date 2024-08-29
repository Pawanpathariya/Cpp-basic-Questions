/*WAP to create a class name time in which we have two data member hour and minute and having the following method convert_into_minute().   add_two_time_objects.*/
#include<iostream>
using namespace std;
class Time{
private:
int hour,minute;
public:
Time(int h,int m){
    hour=h;
    minute=m;
}
void convert_into_minute(){
 int result=hour*60+minute;
 cout<<"Total minutes = "<<result<<endl;
}
Time operator +(Time obj){
 Time temp(0,0);
 int extra_hour=(minute+obj.minute)/60;
 int remain_minute=(minute+obj.minute)%60;
 temp.hour=hour+obj.hour+extra_hour;
 temp.minute=remain_minute;
 return temp;
}
void display(){
    cout<<"Total of both time is "<<hour<<" hour "<<minute<<" min"<<endl;
}
};
int main(){
Time t1(2,30),t2(2,40);
t1.convert_into_minute();
Time total=t1+t2;
total.display();
}