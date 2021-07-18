#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>

using namespace std;

#define MAX 301

int testcase;
int DP[MAX];
int stair[MAX] = { 0, };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main() {
	init();
	cin >> testcase;
	for (int i = 0; i < testcase; i++) cin >> stair[i];

	DP[0] = stair[0];
	DP[1] = max(stair[1], stair[0] + stair[1]);
	DP[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

	for (int i = 3; i < testcase; i++) 
    		DP[i] = max(stair[i] + DP[i - 2], stair[i] + stair[i - 1] + DP[i - 3]);
	cout << DP[testcase - 1];
	return 0;
}
