#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i=2;i<n+1;i++)
    {
    	dp[i] = dp[i-1] + dp[i-2];
	}
	
	cout<<"The Fibonacci series is: ";
	for(int i=0;i<n+1;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
