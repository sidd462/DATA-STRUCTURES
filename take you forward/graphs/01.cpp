#include <bits/stdc++.h>
using namespace std;
//G-2. Graph Representation in C++ | Two Ways to Represent
 
int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
}
/*SIDD462
*/