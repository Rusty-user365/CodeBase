#include <iostream>
using namespace std;

int reverseArray(int arr[],int size)
{
int temp=0;
int end=size-1;
for(int i=0;i<end;i++)
{
	temp=arr[i];
 arr[i]=arr[end];
 arr[end]=temp;
end--;

}
}

void printArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";

	}
	cout<<endl;


}








int main()
{
cout<<"Enter the size of Array"<<endl;

int size;
cin>>size;
int num[100];
cout<<endl<<"Enter the Elements :"<<endl;
for (int i=0;i<size;i++)
{
cin>>num[i];
}

cout<<"reverse Array is :"<<endl;
reverseArray(num,size);
printArray(num,size);

}