#include <bits/stdc++.h>
using namespace std;
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << 
 << #__VA_ARGS__ << 
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define a first
#define b second
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pi;
typedef vector<pi> vii;
typedef unordered_map<int,int> umii;
typedef unordered_map<char,int> umci;
typedef map<char,int> omci;
typedef map<int,int> omii;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))

ll solve() {
return 0;
}


int f(int i,vector<int> &cost,vector<int>&dp)
{
  if(i>cost.size())
  return INT_MAX -1001;
if(i==cost.size())
return 0;
if(dp[i]!=-1)
return dp[i];
return dp[i]=min(cost[i]+f(i+1,cost,dp),cost[i]+f(i+2,cost,dp));
}
int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return(min(f(0,cost,dp),f(1,cost,dp)));
    }

int main(){
  vi v={10,15,20};
  cout<<minCostClimbingStairs(v);
}
/*SIDD462
*/