#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(int arr[],int size ,int key){
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
		int ans =-1;
	while(start<=end)
	{
	if (arr[mid]==key)
	{
	ans= mid;
	end=mid+1;

	}
	else if(key>arr[mid])
	{
start=mid+1;

	}
	else if(key<arr[mid])//left me jao
	{

	end=mid-1;

	}
	mid=start+(end-start)/2;



	}
	return ans;
}
int lastOccurence(int arr[],int size ,int key){
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans =-1;

	
	while(start<=end)
	{
	if (arr[mid]==key)
	{
		ans= mid;
	end=mid+1;

	}
	if(key>arr[mid])
	{
start=mid+1;

	}
	else
	{

	end=mid-1;

	}
	mid=start+(end-start)/2;



	}
	return ans;
}



int main(){
	
int s[7]={1,2,2,3,4,5,6};
int k=2;
int size=7;
cout<<" left most occurence &right most occurence of key is :"<<endl;

pair<int,int>p;
p.first=firstOccurence(s,size,k);
p.second=lastOccurence(s,size,k);

cout<< p.first<<", "<<p.second<<endl;
}