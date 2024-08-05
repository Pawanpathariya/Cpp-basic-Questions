#include<iostream>
using namespace std;
int main(){
   int sumeven=0,sumodd=0;
   int n;
   cout<<"Enter n value : ";
   cin>>n;

for(int i=1;i<=n;i++){
    if(i%2==0){
        sumeven+=i;
    }
    else{
        sumodd+=i;
    }
    cout<<i<<endl;
}
cout<<"Total of even number = "<<sumeven<<endl;
cout<<"Total of odd number = "<<sumodd<<endl;

}