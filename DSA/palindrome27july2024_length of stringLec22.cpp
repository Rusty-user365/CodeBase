//check if the string is palindrome
//Reverse a string
#include<iostream>
using namespace std;


char toLowerCase(char ch){
	if(ch>='a'&&ch<='z'){


		return ch;
	}
	else{
		char temp=ch-'A'+'a';// A=65, ex B=66, 66-65=1 now ,a=97+1=b=98;
	}
}

void reverse(char name[],int n){
	int s=0;
	int e=n-1;

	while(s<e){

		swap(name[s++],name[e--]);
	}



}


bool palindrome(char a[],int n){
	int s=0;
	int e=n-1;
       while(s<=e){
   if(a[s]!=a[e]){
    return 0;
   }

   else{
	s++;
	e--;

}

}
return 1;//true
}



int getLength(char name[])
{
	int count=0;


	for (int i=0;name[i]!='\0';i++){
     count++;
	}
	return count;
}



int main(){
	

char name[20];
	cout<<"Enter your name "<<endl; 
	cin>>name;
	cout<< "Your name is ";
	cout<<name<<endl;


	cout<< "Length:"<<getLength(name)<<endl;
	
reverse(name,getLength(name));
int len=getLength(name);

cout<< "Your  Reversed name is ";
cout<<name<<endl;
	

cout<<"Palindrome or Not :"<<palindrome(name,len)<<endl;





cout<<"character is "<<toLowerCase('c')<<endl;

	return 0;



}