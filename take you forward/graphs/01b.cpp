#include <bits/stdc++.h>
using namespace std;
//G-2. Graph Representation in C++ | Two Ways to Represent
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
}
/*SIDD462
*/