// Problem Link : https://www.spoj.com/problems/COINS/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll calc(vector<ll> &dp, ll n)
{
	if (n<1000000)  // Base case
	{
		return dp[n];
	}
	return max(n, calc(dp, n/2)+calc(dp, n/3)+calc(dp, n/4)); // calculate
}

int main() {
	// your code goes here
	ll n;
	vector <ll> dp(1000000, 0);
	for(ll i=0;i<1000000;i++) // Precompute to reduce recursion depth
	{
		dp[i] = max(i, dp[i/2]+dp[i/3]+dp[i/4]);
	}
	while(scanf("%lld", &n)!=EOF)
	{
		ll ans=0;
		ans = calc(dp, n);
		cout<<ans<<"\n";
	}
	return 0;
}
