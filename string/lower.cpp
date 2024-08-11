//wap to convert upper case letter into lower one and vice-versa
#include<iostream>
using namespace std;
 int main(){ 
 string str ="apple 123 A";
 for(int i=0;i<str.length();i++){
   if(isupper(str[i])){
    str[i]=tolower(str[i]);  
     }
      else if(islower(str[i])){
    str[i]=toupper(str[i]);  
     }
     else if(isdigit(str[i])){
    str[i]='$';  
     }
 }
 cout<<str;
 }


 /*#include<iostream>
using namespace std;
 int main(){ 
 string str ="Apple 123 ";
 cout<<isdigit(str[6]);
 }*/