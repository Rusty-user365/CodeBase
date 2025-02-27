#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


void print(vector<int >arr){
	int n=arr.size();
	for(int i=0;i<n;i++){
		cout<<arr[i]<<", ";
	}
}

vector<int> bubbleSort(vector<int>arr){
	int n=arr.size();
	bool swapped=false;
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}

if(swapped==false){
	cout<<"Already sorted :";break;}

	}print(arr);
}


int main()
{
	vector<int> arr={1,2,3,4,5,6};
	bubbleSort(arr);
	



}