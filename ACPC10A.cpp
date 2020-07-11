// Problem Link : https://www.spoj.com/problems/ACPC10A/

#include <iostream>
using namespace std;

int main() {
	float a,b,c,d;
	float r,ans;
	cin>>a>>b>>c;
	while(1)
	{
		if(a==0 && b==0 && c==0)
		{
			break;
		}
		if (b-a == c-b)
		{
			d = b-a;
			ans = c+d;
			cout<<"AP "<<ans<<"\n";
		}
		else
		{
			r = b/a;
			ans = c*r;
			cout<<"GP "<<ans<<"\n";
		}
		cin>>a>>b>>c;
	}
	return 0;
}
