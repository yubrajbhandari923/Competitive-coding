// https://www.spoj.com/problems/LASTDIG/
#include<bits/stdc++.h>

using namespace std;

int lastdig(int a, int b){
	a = a % 10;
	if(b==0) return 1;
	if(a == 0 or a == 1 or a==5 or a==6) return a;
	// if(a > 5) a = a - 10;
	
	vector<int> order_cls{a};
	int m{a};
	while(true){
			m *= a;
			m %= 10;
			if (m == a) break;
			order_cls.push_back(m);
	}
	unsigned long long int l{order_cls.size()};
	b %= l;
	if (b==0) b = l;
	return order_cls[b-1];
}

int main(){
	int t,a,b;
	cin >> t;
	while(t){
		cin >> a >> b;
		cout << lastdig(a,b);
		t--;
	}
	return 0;
}
