#include <iostream>
#include <vector>
#include <algorithm>  // Add this line for using sort
using namespace std;

bool isPossible(vector<int> stalls, int k, int mid) {
    int n = stalls.size();
    int cowCount = 1;
    int lastPos = stalls[0];//place the first cow at oth pos
//this loop runs 3 times
    //as stall[i]-lastpos is constant==1
    //and mid alwys changing in this case first 3,then 2, and then answ 1
    for (int i = 0; i < n; ++i) {//{1 ,2, 3, 4, 6} sorted now
        if (stalls[i]-lastPos >= mid) {// stall[1]=2-1    i=2=>   3-2=1>=3
            //i=3  ==>4-3 ii=4==> 6-4=2
           
            cowCount++;
            if (cowCount==k) {
                return true;//As soon it hits the cowcount
                // return true no need to check further
            }
            
       lastPos= stalls[i];//i(1)=2 i(2)=3
      
        }
             
    }

    return false;
}


int aggressiveCows(vector<int> stalls, int k) {
    sort(stalls.begin(),stalls.end());//{1 ,2, 3, 4, 6} sorted now
    int n = stalls.size();
    int s = 0;
  
    int maxi = -1, ans=-1;

    for (int i = 0; i < n; i++) {
       maxi=max(maxi,stalls[i]);//to find and store the max element of array
    }

    int e = maxi;//in number line the end of searchspace 0to max(6)
    int   mid = s + (e - s) / 2;

    // Binary search start
    while (s <= e) {
      

        if (isPossible(stalls, k, mid)) {//isposs at mid=1
            ans = mid;
            s= mid + 1;//largest solution is in right
            //1+1=2--> s=2 m=8/2=4 search 4and b/w 6
        } else {
            e = mid - 1;//since there is no sol at mid so solution is on left
        }
          mid = s + (e - s) / 2;//2nd time m=4 2-6.



          /*initial search space: 0 to 6 (max element in stalls).
Iteration 1: Midpoint at 3. isPossible is called at mid = 3.
Iteration 2: Midpoint at 4. isPossible is called at mid = 4.
Iteration 3: Midpoint at 5. isPossible is called at mid = 5.
Iteration 4: Midpoint at 6. isPossible is called at mid = 6.
Iteration 5: Midpoint at 7. isPossible is called at mid = 7*/
    }


    return ans;
}

int main()
{

    vector <int> stalls={4 ,2, 1, 3, 6};// these no are stall name
     //ans=2 as 3-1=2
    int k=2;//no of cows

    cout<<"The maximum possible minimum distance will be :"<<aggressiveCows(stalls,k);
}