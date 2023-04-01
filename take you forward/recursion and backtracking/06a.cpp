#include <bits/stdc++.h>
using namespace std;
void subsequence(int ind,vector<int> &ds,int arr[],int n)
{
 if(ind==n)
 {
    for(auto it:ds){
        cout<<it<<" ";
    }
    if(ds.size()==0)
    cout<<"{}";
    cout<<endl;
    return;
 }    
    ds.push_back(arr[ind]);
    subsequence(ind+1,ds,arr,n);
    ds.pop_back();
    subsequence(ind+1,ds,arr,n);

}
int main(){
    int arr[]={3,1,2};
    vector<int> ds;
    int n=3;
subsequence(0,ds,arr,n);
}
/*SIDD462
*/