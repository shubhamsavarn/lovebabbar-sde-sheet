#include <bits/stdc++.h>
using namespace std;
int main(){
    int V;
    cin >> V;
    vector<pair<int,int>> adj[V];
    for(int i =0;i<V;i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i= 0;i<V;i++){
        for(auto x : adj[i]){
            cout << x.first << " " << x.second;
        }
        cout << endl;
    }
    return 0;
    
}
