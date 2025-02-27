
#include <iostream>
#include <vector>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
int i=ranked.size();
vector <int> rank;
vector <int> result;







   
    for (int i = 0; i < ranked.size(); ++i) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
             rank.push_back(rank.empty() ? 1 : rank.back() + 1);
        } else {
            rank.push_back(rank.back());
        }
    }


    return rank;
    
    i=ranked.size()-1;
    //find players rank


vector<int> gameRank()
{
  
ranked.push_back(player[i]);






}


for(int j=0;i>=0;i--)
{
    
    
    if (ranked[i]==player[j])
    rank.push_back(i);
    else if(ranked[i]<player[j])
     {
        
       rank.push_back(i-1); 
     }
    else if(ranked[i]>player[j])
     {
         
       rank.push_back(i); 
     } 
     
     
    j++;
    i--;
}
 return result;

}

int main() {
    // Test with a rank
    vector<int> ranked = {100, 100, 50, 40, 40, 20, 10};
    vector<int> player = {5, 25, 50, 120};

    vector<int> result = climbingLeaderboard(ranked, player);

    // Display the result
    for (int score : result) {
        cout << score << " ";
    }

    return 0;
}