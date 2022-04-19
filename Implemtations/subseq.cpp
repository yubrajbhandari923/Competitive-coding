#include<bits/stdc++.h>

using namespace std;

int subsum(vector<int> &a){
	int msum=0;
	for(int x: a){
		msum += x;
		if (msum<0) msum = 0;
	}
	return msum;
	
}


int main(){
	vector<int> a;
	int b,x;
	cout << "No. of terms:";
	cin >> b;
	while(b){
		cin >>x;
		a.push_back(x);
		b--;
	}
	cout << "MAX SUBSUM:" << subsum(a);
	return 0;
	}
