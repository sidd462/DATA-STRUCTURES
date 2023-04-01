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

int help(int n,vector<int>&dp)
{
    if(n==0) return 0;
    if(n==1 or n==2) return 1;
    if(dp[n]!=-1) return dp[n];
   return dp[n]=help(n-1,dp)+help(n-2,dp)+help(n-3,dp);
}
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return help(n,dp);
    }
int main(){
  cout<<tribonacci(5);
}
/*SIDD462
*/