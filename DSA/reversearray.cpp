#include <iostream>
using namespace std;

int reverseArray(int arr[],int size)
{
int num[100];
int end=size-1;
for(int i=0;i<size;i++)
{
 num[i]=arr[end];
end--;
cout<<num[i]<<" ";
}

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

}