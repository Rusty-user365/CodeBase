#include<iostream>
#include<vector>
using namespace std;


bool isPossible(vector<int>arr, int n,int m, int mid)
{
	int studentCount=1;
	int pageSum=0;


	for(int i=0;i<n;i++){
		if(pageSum+arr[i]<=mid)
		{
			pageSum+=arr[i];
		}
		else
		{
			studentCount++;
			if(studentCount>m||arr[i]>mid)
			{
				return false;
			}
			pageSum=arr[i];
		}
	}

	return true; 
}

int allocateBooks(vector<int>arr,int n,int m)
{
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{

  sum+=arr[i];// to find maximum search space i.e. 0 to 100 


	}
	int e=sum;
	int ans=-1;
	int mid=s+(e-s)/2;

	//BinarySearch begin

	while(s<=e)//60<=59 false loop end
	{
   if(isPossible(arr,n,m,mid))//59+60/2=59 = false
   {
     ans=mid;//store ans  ex 60 
     e=mid-1;// check if a another minimum solution exist . ex 60-1 =59 false
   }
   else
   {
    s=mid+1;//in case of 59 ,  s=60
   }
   mid=s+(e-s)/2;// 60+60/2=60

	}
	return ans;//loop  end with ans=60;
}


int main(){
 vector<int> arr={10,20,30,40};
 int n= arr.size();//number of books
 int m=2;//number of students

 cout<<"Maximum no of pages assigned to a student is minimum at: "<<allocateBooks(arr,n,m);





}
