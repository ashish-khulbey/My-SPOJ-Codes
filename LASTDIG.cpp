// Problem Link : https://www.spoj.com/problems/LASTDIG/

#include <iostream>
using namespace std;

int pow(long long a, long long b) // Exponentiation by Squaring
{
    if(a == 0 && b == 0)    return 0;
    int ans = 1;
    while(b > 0)
    {
        if(b%2 == 1)
            ans *= a;
        a *= a;
        a %= 10;
        ans %= 10;
        b /= 2;
        if(ans == 0)    break;
    }
    return ans;
}

int main() {
	// your code goes here
	long long a,b,t,ans=1;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		ans = pow(a,b);
		cout<<ans<<"\n";
	}
	return 0;
}
