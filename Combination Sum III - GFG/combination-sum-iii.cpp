//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> r;
  void fun(int i,int n,int t,vector<int> &a,vector<int> &v,int k)
  {
      if(t==0 and v.size()==k)
      {
          r.push_back(v);
         return;
      }
      for(int j=i;j<n;j++)
      {
          if(a[j]>t)break;
          if(j>i and a[j]==a[j-1])continue;
          v.push_back(a[j]);
          fun(j+1,n,t-a[j],a,v,k);
          v.pop_back();
          
      }

  }
    vector<vector<int>> combinationSum(int k, int n) {
        // code here
        vector<int> a;
        for(int i=1;i<10;i++)
        {
            a.push_back(i);
        }
         sort(a.begin(),a.end());
        int n1=a.size();
        vector<int> v;
        fun(0,n1,n,a,v,k);
        return r;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends