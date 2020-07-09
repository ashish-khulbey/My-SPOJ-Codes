#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
		string a,b;
		cin>>a>>b;  //2 numbers input as string
		reverse(a.begin(), a.end());  // reverse first number
		reverse(b.begin(), b.end());  // reverse second number
		int total = stoi(a)+stoi(b);  // stoi--string to integer
		string total_str = to_string(total);  // interger to string
		reverse(total_str.begin(), total_str.end());
		total = stoi(total_str);
		cout<<total<<"\n";
	}
	return 0;
}
