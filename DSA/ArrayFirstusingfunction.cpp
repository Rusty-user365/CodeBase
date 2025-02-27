#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
cout<<"printing the array"<<endl;
//print the array
for(int i=0; i<size;i++)
{
	cout<<arr[i]<<" ";

}


}

int main()
{
	
int a[15]={1};
printArray(a,15);
int First[10]={0};
int firstsize= sizeof(First)/sizeof(int);

cout<<endl<<"Size of first :"<<firstsize;
char ch[5]={'a','b','c','d','4'};
cout<<endl<<ch[3]<<endl;


}