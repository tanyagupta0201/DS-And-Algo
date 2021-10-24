/*
 *	Permuation of Array
 *	Backktracking algorithm to print permuation of array
 *	Author: Shakti Raj Pandey
 *
 */

#include<bits/stdc++.h>
using namespace std;

vector<vector<int > > ans;

// * nums  - represents input array
// * temp  - represents number taken so far
// * taken - represents flag for taken number
void solve(vector<int >& nums, vector<int >& temp, vector<int >& taken) {
    int N = nums.size();
    if(temp.size() == N) {
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<N; i++) {
        if(!taken[i]) {
            taken[i] = 1;
            temp.push_back(nums[i]);
            solve(nums, temp, taken);
            temp.pop_back();
            taken[i] = 0;
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<int > temp, taken;
    int N = nums.size();
    if(N < 0) return ans;
    taken.resize(N, 0);
    solve(nums, temp, taken);
    return ans;
}


int main() {
	vector<int > nums = {1, 2, 3};

	vector<vector<int > > permuated = permute(nums);
	cout<<"Total Permuation: "<<permuated.size()<<endl;
	for(auto array: permuated) {
		for(auto x: array) {
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}
