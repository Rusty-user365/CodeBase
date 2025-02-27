#include <iostream>
#include<vector>
using namespace std;


int linearSearch(int e)
{     
	  int s=1;

	  while(s<=e/2)
	  {
	  	if (s*s<=e){// = sign so in 6 else doesnt execute
	  		
	  		s++;

	  	}
	  	else
	  	{
	  		return --s; // for when 6<13 && 36<26 so op 5
	  	}

       


	  }

	  return s;  // for cases like 1  as 1/2=0.5

}




int main()
{
  int a=0;
cout<<"Enter a Number :";
	cin>>a;
	cout<<linearSearch(a);




}