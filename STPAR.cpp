// Problem Link : https://www.spoj.com/problems/STPAR/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	while(1)
	{
        cin>>n;
		if(n==0)
			break;
		long long temp=0,count=1,flag=0;;
		vector<long long> v;
		stack<long long> stk1,stk2;
		for(long long i=0;i<n;i++)  // input
		{
			cin>>temp;
			stk2.push(temp);
		}
		while(!stk2.empty())  // reverse input stack
		{
			temp = stk2.top();
			stk1.push(temp);
			stk2.pop();
		}
		while(!stk1.empty())  // check all values
		{
			// cout<<count<<" ";
			if(stk1.empty())
				break;
			else if(stk1.top()==count)
			{
				stk1.pop();
				count++;
			}
			else if(stk2.empty()==0 && stk2.top()==count)
			{
				stk2.pop();
				count++;
			}
			else
			{
				temp = stk1.top();
				stk1.pop();
				stk2.push(temp);
			}
		}
		while(!stk2.empty())  // check remaining values
		{
			// cout<<count<<" ";
			if(stk2.top()==count)
			{	
				stk2.pop();
				count++;
			}
			else
				break;
		}
		if(stk2.empty() && stk1.empty())  // both empty means solved
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
