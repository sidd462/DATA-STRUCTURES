#include <bits/stdc++.h>
using namespace std;
void printS(int ind,vector<int> &ds, int s,int sum, int arr[],int n)
{
    if(ind==n){
        if(s==sum)
        {
            for(auto it:ds)
            cout<<it<<' ';
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printS(ind+1,ds,s,sum,arr,n);//pick element
    s-=arr[ind];
    ds.pop_back();
    printS(ind+1,ds,s,sum,arr,n);//not pick element
}
int main(){
}
/*SIDD462
*/