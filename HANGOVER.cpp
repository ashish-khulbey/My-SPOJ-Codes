// Problem Link : https://www.spoj.com/problems/HANGOVER/

#include <iostream>
using namespace std;

int main() {
	double store[1000000000],temp=3,check=0,total=1,div=0.00;
	long long ind=1;
	store[0]=0.50;
	while(1)  // pre-computation
	{
		if(check>=5.20)
			break;
		div = 1/temp;
		store[ind] = store[ind-1] + div;
		check = store[ind];
		temp++;
		ind++;
		total++;
	}
	
	double n;
	while(1)  // main loop
	{
		cin>>n;
		if(n==0.00)
			break;
		for(long long i=0;i<10000000;i++)
		{
			if(store[i]>=n)
			{
				cout<<i+1<<" card(s)\n";
				break;
			}
		}
	}
	
	return 0;
}
