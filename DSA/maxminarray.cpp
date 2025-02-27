#include <iostream>
#include<limits.h>
using namespace std;

int  getMax(int arr[],int size)
{

//calc max in array
int max =INT_MIN;
for(int i=0; i<size;i++)
{
	if(arr[i]>max)
	{
		max =arr[i];

	}
	

}
return max;

}


int getMin(int arr[],int size){

//calc max in array
int min =INT_MAX;
for(int i=0; i<size;i++)
{
	if(arr[i]<min)
	{
		min =arr[i];

	}
	

}
return min;

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
cout<<"Maximum Element is :"<<getMax(num,size)<<endl;
cout<<"Minimum Element is :"<<getMin(num,size)<<endl;

}