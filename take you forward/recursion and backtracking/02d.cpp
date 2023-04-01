#include<bits/stdc++.h>
using namespace std;
void printn_1_backTracking(int n, int i) {
	if (i > n) {
		return;
	}
	printn_1_backTracking(n, i + 1);
	cout << i << " ";
}
int main(){
	printn_1_backTracking(5,1);
}