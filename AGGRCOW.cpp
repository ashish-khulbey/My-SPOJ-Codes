// Problem Link : https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t,n,c;

ll check(vector<ll>v, ll mid) // check if current difference value is possible to implement
{
	ll prev_val = v[0],cow=1; // one cow put at 1st stall by default
	for(ll i=1;i<n;i++)
	{
		if(v[i]-prev_val>=mid)
		{
			cow++;
			prev_val=v[i];
			if(cow==c)  // all cows put in stalls
				return 1;
		}
	}
	return 0;
}

ll bs(vector<ll> v)
{
	ll mid,s,e,ans=-1;
	s = v[0];
	e = v[n-1];
	while(e>s)  // binary search
	{
		mid = (e+s)/2;
		if(check(v, mid)==1)
		{
			s = mid+1;
			if(mid>ans)
				ans=mid;
		}
		else
			e=mid;  // not mid+1 as it skips values
	}
	return ans;
}

int main() {
	cin>>t;
	while(t--)
	{
		ll ans=-1;
		vector<ll>v;
		cin>>n>>c;
		for(ll i=0;i<n;i++)
		{
			ll temp;
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		ans=bs(v);
		cout<<ans<<"\n";
	}
	return 0;
}
