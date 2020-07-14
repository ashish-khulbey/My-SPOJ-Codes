// Problem Link : https://www.spoj.com/problems/ACODE/

#include <bits/stdc++.h>

using namespace std;

int main() {
	char s[5001]; //  input string
	while(1)
	{
		scanf("%s",s);
		long long dp[5001]={0}; // memo array
		if(s[0]=='0') // first character is 0, so invalid code
			break;
		int len = strlen(s);
		dp[0]=1;  // first character
		dp[1]=1;  // first character
		for(int i=2;i<=len;i++)
		{ // converting to integer for comparison
			char c1=s[i-2]-'0', c2=s[i-1]-'0';
      // check if 2 characters can be combined
			if(c1==1 || (c1==2 && c2<=6))
				dp[i]+=dp[i-2];
			// check if present character is not o --invalid
      if(c2!=0)
				dp[i]+=dp[i-1];
		}
		cout<<dp[len]<<"\n";  // last element is the total decodings
	}
	return 0;
}
