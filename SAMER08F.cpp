// Problem Link : https://www.spoj.com/problems/SAMER08F/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n!=0)
	{
		int formula = (n*(n+1)*(2*n + 1))/6;
		cout<<formula<<"\n";
		cin>>n;
	}
	return 0;
}
