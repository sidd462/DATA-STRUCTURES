#include <bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>n)
    return;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    print(2,8);
}
/*SIDD462
*/