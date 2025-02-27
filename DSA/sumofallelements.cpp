#include <iostream>

using namespace std;

int  getSum(int arr[],int size)
{

//calc max in array
int sum =0;
for(int i=0; i<size;i++)
{

		sum+=arr[i];	

}
return sum;

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
cout<<"Sum of All Element is :"<<getSum(num,size)<<endl;


}