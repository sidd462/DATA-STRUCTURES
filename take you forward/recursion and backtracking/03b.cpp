#include <bits/stdc++.h>
using namespace std;
int sumN_1(int n)
{
    if(n==0)
    return 0;
    return n+sumN_1(n-1);
}
int main(){
    cout<<sumN_1(3);
}
/*SIDD462
*/