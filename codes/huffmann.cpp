//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
    Node(int data, Node *left, Node *right){
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
struct compare{
    bool operator()(Node *n1,Node *n2)
    {
        return n1->data > n2->data;
    }
};
class Solution
{
	public:
	void traversal(Node *root,string code,vector<string> &ans)
	{
	    if(!root->left and !root->right) 
	    {
	        ans.push_back(code); return;
	    }
	    
	    
	    traversal(root->left,code+"0",ans);
	    traversal(root->right,code+"1",ans);
	}
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<Node*,vector<Node*>,compare> pq;
		    vector<string> res;
		    for(int i=0;i<N;i++)
		    {
		        pq.push(new Node(f[i]));
		    }
		    
		    while(pq.size() > 1)
		    {
		        Node *topfN=pq.top(); pq.pop();
		        Node *topSN=pq.top(); pq.pop();
		        
		        pq.push(new Node(topfN->data + topSN->data,topfN,topSN));
		    }
		    traversal(pq.top(),"",res);
		    return res;
		}
		
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends
