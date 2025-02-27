#include <iostream>
#include<vector>
using namespace std;


int sum(vector<int> b)
{
int sum=0, e=b.size()-1;


while(0<=e)
{
 sum+=b[e];
 e--;

}
cout<<"sum :"<<sum;
return sum;


}




int binarySearch(vector<int>arr)
{     
	  int s=0;
	  int e=sum(arr), result=0;
	

	  for(int i=0;i<e;i++)
	  {
	  	++s;
       int mid = s+(e-s)/2;
       cout<<mid;
       s=mid;
       if(arr[i]<=e/2)
       {
       	result+=arr[i];
       	s=mid+1;
       }
       if(arr[i]>=e/2)
       {
       	result+=arr[i];
       	e=mid-1;
       }
       
      

    


	  }

	  return s;  // for cases like 1  as 1/2=0.5
}






int main()
{
 vector<int> arr={10,20,30,40};

sum(arr);
binarySearch(arr);
	




}