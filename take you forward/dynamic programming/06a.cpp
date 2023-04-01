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
int main(){
}
/*SIDD462 leetcode

class Solution {
public:
    int f(vector<int> nums,vector<int>&dp,int i,int start)
    {
        if(i<start) return 0;
        if(i==0) return nums[0];
        if(dp[i]!=-1)
        return dp[i];
        int pick=nums[i]+f(nums,dp,i-2,start);
        int non_pick=0+f(nums,dp,i-1,start);
        return dp[i]=max(pick,non_pick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        vector<int> dp(n,-1);
        vector<int> dp2(n,-1);
        int a1=f(nums,dp,n-2,0);
        int a2=f(nums,dp2,n-1,1);
        return max(a1,a2);
        
    }
};
*/