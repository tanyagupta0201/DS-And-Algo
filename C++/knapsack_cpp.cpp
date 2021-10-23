/*
Program to solve the Knapsack problem using DP
Author: Saurabh Pandey
Date Modified: 23rd October 2021
*/
#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
	int dp[W + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i < n + 1; i++) {
		for (int w = W; w >= 0; w--) {

			if (wt[i - 1] <= w)
				dp[w] = max(dp[w],
							dp[w - wt[i - 1]] + val[i - 1]);
		}
	}
	return dp[W];
}

int main()
{
  int n;
  cin>>n;
  int val[n];
	int wt[n];
  for(int i = 0;i<n;i++) {
    cin>>val[i];
    cin>>wt[i];
  }
	int W;
  cin>>W;

	cout << knapSack(W, wt, val, n); // Example run of knapsack
	return 0;
}
