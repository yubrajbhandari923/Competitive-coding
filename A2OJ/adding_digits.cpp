#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,n;
	cin >>a>>b>>n;

	while(n){
		for(int i{1}; i<=9;i++){
			int buff = a * 10 + i;
			if(i==9 and buff % b !=0){ cout << -1; return 0;}
			if(buff % b == 0){a=buff; break;}
		}
		n--;
	}
	cout << a;
	return 0;
}
