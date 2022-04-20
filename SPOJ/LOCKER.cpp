// spoj/Locker
#include<bits/stdc++.h>
using namespace std;
const int MOD  = 1000000007;
#define ull unsigned long long int


// Main Concept is that you get maximum value if yo divide most part by 3
// eg: 8: 3,3,2 and 18: 3,3,3,3,3,3,3 gives max product 
// but dividing into 3,1 is not good rather 4 is good cause 3*1 > 4

ull mod_pow(ull x, ull y, ull m){
		x%=m;
		ull res(1);
		while(y){
			if (y%2==0){ x = (x*x)%m; y/=2;}
			else {res= (res*x)%m; y-=1;}
		}
		return res;
}
ull norecur_money(ull n){
		switch(n){
			case 1:
			case 2:
			case 3:
			case 4:
				return n;
			default:
				ull x = n % 3;
				if (x == 1) return (mod_pow(3, n/3 -1, MOD) * 4)%MOD;
				else if (x == 0) return (mod_pow(3, n/3, MOD))%MOD;
				else return (mod_pow(3,n/3, MOD)* 2)%MOD;
		}
}
int main(){
ull t,n; // n must ull; Time Wasted :: 0.5hr
		cin >> t;
	while(t){
		cin >> n;
	t--;
	cout << norecur_money(n) << endl;
	}
	return 0;
}
