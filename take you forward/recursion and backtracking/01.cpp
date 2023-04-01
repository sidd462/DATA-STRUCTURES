#include <bits/stdc++.h>
using namespace std;
void print_rec(int n)
{
   static int cur=0;
   
    if(cur==n)
        return;
    cout<<cur<<endl;
    cur++;
    print_rec(n);
}
int main(){
    print_rec(5);
}
/*SIDD462
*/