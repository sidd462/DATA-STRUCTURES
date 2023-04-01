#include <bits/stdc++.h>
using namespace std;
int printS(int ind, int s,int sum, int arr[],int n)
{
    if(ind==n){
        if(s==sum)
        {
            return 1;
        }
        else
        return 0;
    }
    s+=arr[ind];
   int l=printS(ind+1,s,sum,arr,n);//pick element
    s-=arr[ind];
    int r =printS(ind+1,s,sum,arr,n);//not pick element
return l+r;
}
int main(){
}
/*SIDD462
*/