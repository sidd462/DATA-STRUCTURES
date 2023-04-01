//!https://www.youtube.com/watch?v=TmhpgXScLyY&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=10 
// DP 9. Unique Paths 2 | DP on Grid with Maze Obstacles 
//https://takeuforward.org/data-structure/grid-unique-paths-2-dp-9/
#include <bits/stdc++.h>
using namespace std;

int mazeObstaclesUtil(int i, int j, vector<vector<int> > &maze, vector<vector<int> > 
&dp) {
  if(i>=0 && j>=0 && maze[i][j]==-1) return 0; 
  if(i==0 && j == 0)
    return 1;
  if(i<0 || j<0)
    return 0;
  if(dp[i][j]!=-1) return dp[i][j];
    
  int up = mazeObstaclesUtil(i-1,j,maze,dp);
  int left = mazeObstaclesUtil(i,j-1,maze,dp);
  
  return dp[i][j] = up+left;
  
}

int mazeObstacles(int n, int m, vector<vector<int> > &maze){
    vector<vector<int> > dp(n,vector<int>(m,-1));
    return mazeObstaclesUtil(n-1,m-1,maze,dp);
    
}

int main() {

  vector<vector<int> > maze{{0,0,0},
                            {0,-1,0},
                            {0,0,0}};
                            
  int n = maze.size();
  int m = maze[0].size();
  
  cout<<mazeObstacles(n,m,maze);
}/*sidd462
ll f(ll i,ll j,vector<vector<int>> &dp,vector<vector<int>> &maze) {
if(i>0 and j>0 and maze[i][j]==-1) return 0;
if(i==0 and j==0) return 0;
if(i<0 and j<0) return 0;
if(dp[i][j]!=-1) return dp[i][j];
ll up=f(i-1,j,dp,maze);
ll left=f(i,j-1,dp,maze);
return dp[i][j]=up+left;
}
*/