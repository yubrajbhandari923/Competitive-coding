// http://codeforces.com/problemsets/acmsguru/problem/99999/551
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t1, t2, buff, m=1, tot, time;
	cin >> n >> t1 >> t2;
	
	if (t1 > t2){buff = t2; t2= t1; t1=buff;}
	
	while(true) {
		time = m * t2;
		tot = (time / t1) + m;
		if (tot == n) {
			cout << n << time;
			return 0;
		}
		if (tot > n ){
			cout << (n+1) << time;
			return 0;
		}
		m++;

	} 
	
	return 0;
}
