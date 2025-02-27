#include <iostream>

using namespace std;
int main()
{
	int m=1111111;
	int n=m;

	cout<<"Enter a number"<<endl;
	cin>>m;
	int mask=0;
	
	if (m==0)
{
return 1;

}
	while(m!=0)
	{

mask=(mask << 1) |1;
m=m>>1;
	
	}
	cout<<mask;
	 int ans = (~n)&mask;
	cout<<ans<<endl;
return ans;


}