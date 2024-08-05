/* Write a  program to determine eligibility for admission to a professional course based on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=170 */
 #include <iostream>
 using namespace std;
 int main(){
 int phy,chem,maths;
 cout<<"Enter physics, chemistry and maths marks :";
 cin>>phy>>chem>>maths;
 int total=phy+chem+maths;
if(phy>=55 && chem>=55 && maths>=65 && total>=170){
cout<<"You are eligible for addmission";}
else{
    cout<<"You are not eligible";
}
 }