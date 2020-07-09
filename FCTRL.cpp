// Problem Link : https://www.spoj.com/problems/FCTRL/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t; // test cases
	cin>>t;
	while(t--)
	{
		ll n; // n!
		cin>>n;
		ll five = 5;
		ll count = 0;
		while(n/five>0)
		{
			count += floor(n/five);
			five = five*5;
		}
		cout<<count<<"\n";
	}
	return 0;
}
