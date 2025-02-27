#include <iostream>
using namespace std;
int main(){
cout<<" Enter the Amount "<<endl;
int amt=0;
cin>>amt;
 int hund=0, fift=0, twent=0, one=0;
if(amt>0){
 hund=amt/100;
 if((amt%100) >=50){
 	fift=1;

 }
 
 twent=((amt%100)-fift*50)/20;

 one=amt%10;
}
 cout<<hund<<": 100 note"<<endl;
  cout<<fift<<": 50 note"<<endl;
   cout<<twent<<": 20 note"<<endl;
    cout<<one<<": 1's note"<<endl;


}