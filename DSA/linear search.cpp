#include <iostream>

using namespace std;

bool search(int arr[],int size,int key)
{

//calc max in array
int sum =0;
for(int i=0; i<size;i++)
{
if(arr[i]==key) 
{
return 1;
}
		

}
return 0;

}


int main()
{
cout<<"Enter the element to search"<<endl;
int key;
cin>>key;


int num[10]={5 ,7, -2,10 , 22 ,-2 ,0, 5, 22, 1  } ;
	
bool found = search(num,10,key);

if(found)
{

	cout<<"key is present "<<endl;
}
else{
	cout<<"key is absent" <<endl;
}


}