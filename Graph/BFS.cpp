#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] ,int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int> bfs(vector<int> adj[] , int V){
    vector<int> visited(V, 0);
    vector<int> bfs;
    queue<int> q;
    for(int i = 0;i< V;i++){
        if(visited[i] == 0){
            q.push(visited[i]);
            visited[i] == 1;
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it : adj[node]){
                if(!visited[it]){
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        
    }
    return bfs;
}
void printAns(vector < int > & ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}
int main(){
    int V=5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 2, 4);
	vector < int > ans = bfs(adj,V);
	printAns(ans);
	cout << endl;
    return 0;
}
