// Problem Link : https://www.spoj.com/problems/TOANDFRO/

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long col, len, row,ctr;
    cin>>col;
    string s;
    while(1)
    {
    	if(col==0)
    		break;
        cin>>s;
        len = s.length();
        row = len/col;
        char arr[row][col], temp;
        ctr=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                arr[i][j] = s[ctr++];
            }
            if(i%2!=0) //odd row
            {
            	for(int k =0,l=col-1; k<col/2;k++,l--)  // Swap columns of odd rows
            	{
            		temp = arr[i][k];
            		arr[i][k]=arr[i][l];
            		arr[i][l]=temp;
            	}
            }
        }
        for(int j=0;j<col;j++)
        {
            for(int i=0;i<row;i++)
            {
                cout<<arr[i][j];
            }
        }
        cout<<"\n";
        cin>>col;
    }
}
