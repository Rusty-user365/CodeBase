#include<iostream>
using namespace std;
#include<vector>

int firstOcc(vector <int>arr, int key)
{
int n=arr.size();
int s=0, e=n-1;
int mid =e+(s-e)/2;
int ans=-1;
while(s<=e)
{
if(arr[mid]==key)
{
ans=mid;
e=mid-1; //left me ek lastTime check
}
	
else if(key>arr[mid])

{
	s=mid+1; //right me jao

}
else if (key<arr[mid])
{
	e=mid-1; //left me jao
}
mid=s+(e-s)/2;

}

return ans;
}

int lastOcc(vector <int>arr, int key)
{
int n=arr.size();
int s=0, e=n-1;
int mid =e+(s-e)/2;
int ans=-1;
while(s<=e)
{
if(arr[mid]==key)
{
ans=mid;
s=mid+1; //right me ek lastTime check
}
	
else if(key>arr[mid])

{
	s=mid+1; //right me jao

}
else if (key<arr[mid])
{
	e=mid-1; //left me jao
}
mid=s+(e-s)/2;

}

return ans;
}





int main(){
	

	vector <int>arr={1,2,3,3,5};
	int key=3;

	cout<<"First Occurence :"<<firstOcc(arr,key)<<endl;
	cout<<"Last Occurence :"<<lastOcc(arr,key)<<endl;
	int ans=lastOcc(arr,key)-firstOcc(arr,key)+1;
	cout<<"number of occurence :"<<ans;
	return 0;
}