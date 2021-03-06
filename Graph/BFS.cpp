#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[], int V)
{
    // Your code here
     vis[s]=true;
    queue<int>q;
   
    q.push(s);
    while(!q.empty())
    {
        int t=q.front();
        cout<<t<<" ";
        q.pop();
        
        
        for(int i=0;i<adj[t].size();i++)  
        {
            if(!vis[adj[t][i]]){         
                vis[adj[t][i]]=true;
                q.push(adj[t][i]);
            }
        }
    }
    
}




// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis, N);

        cout<<endl;

    }
}

  // } Driver Code Ends
