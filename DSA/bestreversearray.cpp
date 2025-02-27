#include <iostream>
using namespace std;
void reverse(int arr[],int n){
	


  int start=0, end=n-1;
  while (start<=end)
 {
	swap(arr[start], arr[end]);
	start++;
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
reverse(num,size);
cout<<"reverse Array is :"<<endl;
printArray(num,size);

}