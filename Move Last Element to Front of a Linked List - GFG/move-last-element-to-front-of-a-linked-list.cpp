//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head->next==NULL)return head;
        ListNode *n=head;
        ListNode *p=head;
        while(n->next)
        {
            p=n;
            n=n->next;
        }
        p->next=NULL;
        n->next=head;
        return n;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ListNode*> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=new ListNode(x);
            if(i!=0){
                a[i-1]->next=a[i];
            }
        }
        ListNode *head=a[0];
        Solution ob;
        head=ob.moveToFront(head);
        while(head!=NULL){
            cout<<head->val;
            if(head->next!=NULL){
                cout<<" ";
            }
            head=head->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends