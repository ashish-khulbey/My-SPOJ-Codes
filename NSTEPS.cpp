// Problem Link : https://www.spoj.com/problems/NSTEPS/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;
		if(x==y)
		{
			if (x%2==0)
			{
				cout<<x+y<<"\n";
			}
			else
			{
				cout<<x+y-1<<"\n";
			}
		}
		else if (y==x-2)
		{
			if(y%2==0)
			{
				cout<<x+y<<"\n";
			}
			else
			{
				cout<<x+y-1<<"\n";
			}
		}
		else
		{
			cout<<"No Number"<<"\n";
		}
	}
	return 0;
}
