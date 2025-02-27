#include<iostream>
#include<vector>
using namespace std;





 void print(vector<int>arr,int n){


 	for(int i=0;i<n;i++)
 	{
 		cout<<arr[i]<<", ";
 	}
 	cout<<endl;
 }



vector<int> insertionSort(vector<int>arr,int n){

	for(int i=1;i<n;i++){
		int temp=arr[i];




      for (int j=i-1;j>=0;j--)
      {

      	if(arr[j]>temp)//can write temp as arr[J+1]orarr[i]
      	{
      		
      		arr[j+1]=arr[j];//can write j+1 as  i
      		arr[j]=temp;//have to use 3rd variable to switch values not swap


      	}
      	else{
      		break;
      	}
      }




	}
	cout<<"Sorted array :";
	
return arr;



}





int main(){

	vector<int> arr={4,3,12,11,20};
	int n=arr.size();
	
	cout<<"the array: ";

  print(arr,n);

  vector<int> sorted=insertionSort(arr,n);
  print(sorted,n);



}