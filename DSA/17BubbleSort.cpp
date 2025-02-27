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
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}print(arr);
}


int main()
{
	vector<int> arr={1,4,2,5,-2,3};
	bubbleSort(arr);
	



}