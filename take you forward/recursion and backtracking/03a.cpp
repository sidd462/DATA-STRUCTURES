#include <bits/stdc++.h>
using namespace std;
void sumN_1(int i,int sum=0)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    sumN_1(i-1,sum+i);
}
int main(){
    sumN_1(3,0);
}
/*SIDD462
*/