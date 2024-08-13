/*WAP to manipulate the following string as
s="we are here to learn";
output="we$are$here$to$learn";// replace space with '$'
a) by call by value method :
parameter : string
return :string
b) by call by reference method :
parameter : string
return :void
*/

#include<iostream>
using namespace std;

string call_by_value(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str[i]='$';
        }
    }
 return str;
}
void call_by_reference(string &str){
for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str[i]='$';
        }
    }
}

int main(){
    string str="we are here to learn";
    cout<<"call by value :"<<call_by_value(str)<<endl;
    call_by_reference(str);
    cout<<"call by reference :"<<str<<endl;
}