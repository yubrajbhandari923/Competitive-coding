//https://www.spoj.com/problems/TETRA/
#include<bits/stdc++.h>
using namespace std;

struct tetra{
	int wx, wy, wz, xy, xz, yz;
}

int Area(int a,int b, int c ){
		if(a < 0) a = -a;
		if(b<0) b= -b;
		if(c<0) c= -c;
		int s{(a+b+c)/2};
		return sqrt(s*(s-a)*(s-b)*(s-c));
}

int insphere(const tetra & t){
	int WXY = Area(t.wx, t.wy, t.xy);
	int WXZ = Area(t.wx, t.wz, t.xz);
	int WYZ = Area(t.yz, t.wz, t.wy);
	int XYZ = Area(t.xy, t.yz, t.xz);
		
}

int main(){
	int n;
	int x;
	// tetra t;
	cin >> n;
	
	while(n){
		cin >> t.wx >> t.wy >> t.wz >> t.xy >> t.xz >> t.yz ;
	//	vector<int> t{};
	//	for(int i{0}; i<6; i++){
	//		cin >> x;
	//		t.push_back(x);
	//	}
		
		n--;

	}
	return 0;
}
