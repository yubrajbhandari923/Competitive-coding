#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

pair<int, ull> to_bin(int a){
		unsigned int r{1};
		vector<int> ret; 
		while(a){
			// ret *= 10;
			ret.push_back(a % 2);
			a = a/2;
		}
		for(auto it=ret.rbegin() + 1; it!=ret.rend(); it++) r = (r * 10) + *it;
		return {r,ret.size()};
}

ull exp(int a, int b){
		//powers of b
		vector<unsigned int> pows{1};
		pair<int, ull> bin_pair{to_bin(b)};
		
		pows.push_back(b);
		bin_pair.second -= 2;
		while (bin_pair.second){ pows.push_back(pows[pows]); bin-bin_pair.second--;}

		return 0;
}

int main(){
	cout << to_bin(4);
	return 0;

}
