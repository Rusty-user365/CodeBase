#include<iostream>
#include<vector>
using namespace std;



bool isPossible(vector<int>arr,int n,int m,int mid)
{
int painterCount=1;//if we put 0 then there are 2 painters as in case of painter(m=1) 
int wallSum=0;
for(int i=0;i<n;i++)
{
if(wallSum+arr[i]<=mid)
{
	wallSum+=arr[i];
}
else
{
	painterCount++;
	if(painterCount>m||arr[i]>mid)
	{
		return false;
	}

wallSum = boards[i];//as to record new painters data on clean slate
//so diff records dont combine
}


}

return true;

}



int paintersPartion(vector<int >arr,int n,int m)
{
int s=0;
int sum=0;

int ans=-1;

for(int i=0;i<n;i++){
	sum+=arr[i];


}

int e=sum;
int mid=s+(e-s)/2;

//Binary search start
while(s<=e)
{
	if(isPossible(arr,n,m,mid))
	{
		ans=mid;
		e=mid-1;

	}
	else{
		s=mid+1;//as solution is always on the rigth(bigger)
		//since sol. doesnt exist on isPossible(left)so we went right
	}
	mid=s+(e-s)/2;



}
return ans;

}



int main()
{
	vector<int> arr={5,5,5,5};
	int n=arr.size();
	int m=2;
cout<<"Maximum no of continous walls assigned to a Painter so time  is minimum at "<<paintersPartion(arr,n,m);

}