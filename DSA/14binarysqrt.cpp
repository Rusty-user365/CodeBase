#include <iostream>
#include<vector>
using namespace std;


int binarySearch(int n)
{     
	  int s=0;
	  int e=n, result;
	

	  while(s<=e)
	  {
       int mid = s+(e-s)/2;

       if((mid*mid)==n){

       return mid;
     }

	  	if (mid*mid>n){// = sign so in 6 else doesnt execute
	  		
	  		   e=mid;

	  	}
	    


	  	
	  	else
	  	{
	  		s=mid+1; // for when 6<13 && 36<26 so op 5
	  	}

    


	  }

	  return s;  // for cases like 1  as 1/2=0.5
}




int main()
{
  int a=0;
cout<<"Enter a Number :";
	cin>>a;
	cout<<binarySearch(a);




}