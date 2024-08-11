// #include<iostream>
// using namespace std;
// //find function is find index of char 

//  int main(){ 
//  string str="apple is a fruit";
//  int index = str.find('a');
//  cout<<index;
//  index=str.find('a',index+1);
//  cout<<index;
//  }
//wap to find out all the indices of a particular char enter by user
// #include<iostream>
// using namespace std;
//  int main(){ 
//   string str="apple is good for health";
//   int cha='a';

//    int index = -1;
//    while(1){
//     index=str.find(cha,index+1);
//     if( index== -1){
//     break;
//     }
//     cout<<index<<" ";
//    }
//  }


//erase delete the element erase(start index,how many chara)
//  #include<iostream>
// using namespace std;
//  int main(){ 
//   string str="hello guys i am pawan ";
//   cout<<str.erase(10,2);

//  }


 //replace it change or add char replace(start index,how many want to replace ,"string");
 
//    #include<iostream>
// using namespace std;
//  int main(){ 
//   string str="hello guys i am pawan ";
//   str.replace(13,0,"well ");
//   cout<<str;
//  }

//toupper
   #include<iostream>
using namespace std;
 int main(){ 
  string str;
  cout<<"Enter a string ";
  getline(cin,str);
  str[4]=toupper(str[4]);
  cout<<str;
 }