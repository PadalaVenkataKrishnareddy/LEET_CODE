//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        vector<int> v;
        v=arr;
        int j=1;
        int i=0;
        while(i!=n and j!=n)
        {
            
            arr[i]=arr[j];
            i=i+2;
            j=j+2;
            if(i>=n or j>=n)
            {
                break;
            }
            
        }
        i=1;
        j=0;
        while(i!=n and j!=n)
        {
            
            arr[i]=v[j];
            i=i+2;
            j=j+2;
            if(i>=n or j>=n)
            {
                break;
            }
            
        }
        return;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        sort(a.begin(),a.end());
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}
// } Driver Code Ends