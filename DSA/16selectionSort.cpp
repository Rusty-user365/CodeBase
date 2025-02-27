#include <bits/stdc++.h> 
#include<iostream>
#include <vector>
using namespace std;

// in selection sort we selec then compare to rest array part find min then replace
//then arays one part is sorted the the is i process of sorting
 selectionSort(vector<int>& arr, int n)
{   

  for(int i=0;i<n-1;i++){

    int minIndex=i;//for comparing 1st to rest elemnts
    for (int j = i+1; j < n ; j++)
    {//2nd loop to transverse to rest elements
        if(arr[j]<arr[minIndex])//3<4
         minIndex=j;//then index 0=1, switched pos bw 3&4, and at last with  minIndex=j=4

    }

    swap(arr[minIndex],arr[i]);//arr[3],arr[0]->switch (1,4) 
  }



}
void display(vector<int> arr,int n)
{


  cout<<"The Sorted array is :";
for(int i=0;i<n;i++)
{

  cout<<arr[i];
}
}


int main()
{
  
  vector<int>arr={4, 3, 2, 1};
  int n=arr.size();
  selectionSort(arr,n);
  display(arr,n);


}