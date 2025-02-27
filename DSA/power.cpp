#include <iostream>
using namespace std;
int power(int num1, int num2)
{
int ans=1;
for(int i=1;i<=num2;i++)
{

	ans=ans*num1;

}

return ans;

}

int main()
{

int a, b;
cout<<"enter power(a,b)"<<endl;
cout<<"enter a :"<<endl;
cin>>a;
cout<<"enter b :"<<endl;
cin>>b;

cout<< "answer is :"<<power(a,b);


}