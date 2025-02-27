//find the index at which 'k' is present in arr
/*given  sorted array consisting of 'N' elements  arrray is rotated at some  pivot point unknown  to you. example if arr={1,3,5,7,8}.
then after rotating  arr at index 3 the array will be arr={7,8,1,3,5}



*/ 

#include <iostream>
using namespace std;
#include<vector>


int binarySearch(vector<int> arr,int s,int e,int k)
{

int mid=s+(e-s)/2;
while(s<=e)
{
    if(arr[mid]==k)
    {

      return mid;


    }
    // go right
    if(k>arr[mid]){

    	s=mid+1;

    }
    //go left
    else{
    	e=mid-1;
    }
mid=s+(e-s)/2;

}
return -1;


}


int getPivot(vector<int> arr,int n)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e)
	{

		if(arr[mid]>=arr[0]){
			s=mid+1;

		}
		else{
			e=mid;

		}
		mid=s+(e-s)/2;
	}
	cout<<"pivot Element :"<<s<<endl;
return s;

  }







int findPosition(vector<int>arr,int n,int k)
{
	int pivot=getPivot(arr,n );
if (k >arr[pivot] && k<arr[n-1]){
// second line k liye 0 to n-1;
	cout<<"2nd line";
	return binarySearch(arr,pivot,n-1,k);

}
else{

// first line  bigger elements 7,8
	//
	cout<<"first line :";
	return binarySearch(arr,0 ,pivot-1 ,k);
}
	


// at some pint use a function for binary search
}

	


// at some pint use a function for binary search






int main()
{
	vector<int>rar={7,8,1,3,5};
	vector <int>arr={1,3,5,7,8};
	int k=1;
	int n=arr.size();
	cout<<findPosition(arr,n,k)<<" index"<<endl;
	
	return 0;


}