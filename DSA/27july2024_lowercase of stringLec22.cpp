#include<iostream>
using namespace std;



char toLower(char ch)
{

	if(ch>='a'&& ch<='z'){
		return ch;
	}
	else{
		char temp=ch+'a'-'A';
	}

}


bool palindrome(char ch[],int n ){

	int s=0;
	int e=n-1;
	while(s<e){

		if(toLower(ch[s])!=toLower(ch[e])){
			cout<<toLower(s);
			return 0;
		}
		else{

			s++;
			e--;
		}
	}





return 1;// true	
}

void reverse(char name[],int n)
{int s=0;
int e=n-1;
while(s<e)
{
	swap(name[s++],name[e--]);
}


}

int getLength(char name[]){
	int count=0;
	for(int i=0; name[i]!='\0';i++){
	count++;
	}
	return count;
}



int main()
{

	char string[20];
	cout<<"Enter a String "<<endl;
	cin>>string;
	cout<<" Your string is :"<<string<<endl;


	int len=getLength(string);
	cout<<"Length of string : "<<len<<endl;
	reverse(string,len);
	cout<<"reverse : "<<string <<endl;
	cout<<"Is palindrome or not : "<<palindrome(string,len)<<endl;



}