#include <bits/stdc++.h>
using namespace std;
bool printS(int ind,vector<int> &ds, int s,int sum, int arr[],int n)
{
    if(ind==n){
        if(s==sum)
        {
            for(auto it:ds)
            cout<<it<<' ';
            cout<<endl;
            return true;
        }
        else
        return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
   if( printS(ind+1,ds,s,sum,arr,n)==true);//pick element
        return true;
    s-=arr[ind];
    ds.pop_back();
    if(printS(ind+1,ds,s,sum,arr,n));//not pick element
        return true;
return false;
}
int main(){
}
/*SIDD462
*/