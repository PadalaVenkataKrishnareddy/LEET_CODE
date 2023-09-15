//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long  m=1e9+7;
        if(n<=3)return n;
        vector<long long> v(n+2,0);
        v[0]=0;
        v[1]=1;
        v[2]=2;
        v[3]=4;
        for(int i=4;i<=n;i++)
        {
            v[i]=(v[i-3]+v[i-2]+v[i-1])%m;
        }
        return v[n]%m;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends