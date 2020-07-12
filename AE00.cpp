// Problem Link : https://www.spoj.com/problems/AE00/

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,i,j,tcount=0, pr_count=0;
    cin>>n;
    for(i=1;i<=n;i++) // for all numbers <= n
    {
        for(j=1;j<=sqrt(i); j++)  // finad all factors <=(sqrt(n))
        {
            if(i%j==0)
            {
                tcount+=1;
            }
        }
    }
    cout<<tcount<<"\n";
}
