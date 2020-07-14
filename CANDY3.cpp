// Problem Link : https://www.spoj.com/problems/CANDY3/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
		string blank;
		getline(cin, blank);
		long long total=0, count=0,input, nos=0;
		cin>>nos;
		for(long long i=0;i<nos;i++)
		{
			cin>>input;
			total=((total%nos)+(input)%nos)%nos;
		}
		if (nos==0)
			cout<<"NO\n";
		else if(total==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
