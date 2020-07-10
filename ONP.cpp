// Problem Link : https://www.spoj.com/problems/ONP/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t; // test case
	while(t--)
	{
		string s;
		cin>>s; // input string
		ll len = s.length();
		stack <char> stk;
		char c;
		for(ll i=0;i<len;i++)
		{
			if(s[i]=='(') // ignore
			{
				continue;
			}
			if(s[i]==')') // pop and print
			{
				c = stk.top();
				stk.pop();
				cout<<c;
				continue;
			}
			if(s[i]>='a' && s[i]<='z')  // print directly
			{
				cout<<s[i];
				continue;
			}
			else  // push to stack
			{
				stk.push(s[i]);
			}
		}
		cout<<"\n";
	}
}
