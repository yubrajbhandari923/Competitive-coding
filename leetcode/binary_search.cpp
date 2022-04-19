#include<bits/stdc++.h>
using namespace std;

      int s(vector<int> & nums, int target, int from, int to){
        int len{(from + to)/2};
        
		if(from==to){
			if(nums[from]==target) return to;
			else return -1;
		}

		if(nums[len] == target) return len;
        
		if(nums[len] < target ) return s(nums,target,(len+1), to);
        
		else return s(nums,target,from,(len-1));
    }
    
    int search(vector<int>& nums, int target) {
        unsigned long long int len{nums.size()};
        
        return s(nums,target,0,len-1);
    }
	int main() {
		vector<int> a{-1, 0, 3,5,9,12 }; 
		cout<< search(a, 2); 
		return 0;}
