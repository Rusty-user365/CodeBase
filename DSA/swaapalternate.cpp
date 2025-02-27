#include <iostream>
using namespace std;
void swapAlternate(int arr[],int size){
	


  // i is index
for(int i=0;i<size;i+=2)
 {
	if(i+1<size){
	
	swap(arr[i], arr[i+1]);
	}

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
swapAlternate(num,size);
cout<<"reverse Array is :"<<endl;
printArray(num,size);

}