//Dynamic Programming : Climbing Stairs
/*Dynamic Programming : Climbing Stairs
How to write 1-D Recurrence relation / Climbing Stairs
In this article, we will learn to write 1-D Recurrence relations using the problem “Climbing Stairs”
Problem Statement: Given a number of stairs. Starting from the 0th stair we need to climb to the “Nth” stair. At a time we can climb either one or two steps. We need to return the total number of distinct ways to reach from 0th to Nth stair.
From <https://takeuforward.org/data-structure/dynamic-programming-climbing-stairs/> 
*/
#include <bits/stdc++.h>

using namespace std;


int main() {
  int n=3;
  vector<int> dp(n+1,-1);
  dp[0]= 1;
  dp[1]= 1;
  for(int i=2; i<=n; i++){
      dp[i] = dp[i-1]+ dp[i-2];
      } 
  cout<<dp[n];
  return 0;
}