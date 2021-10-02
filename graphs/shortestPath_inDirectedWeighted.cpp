#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void findTopoSort(ll node, ll vis[], stack<ll> &st, vector<pair<ll,ll>> adj[]){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it.first])
        findTopoSort(it.first, vis, st, adj);
    }
    st.push(node);
}

void shortestPath(ll src, ll n, vector<pair<ll,ll>> adj[]){
    
    ll vis[n] = {0};
    stack<ll> st;
    for(ll i=0; i<n; i++){
        if(!vis[i])
        findTopoSort(i,vis,st,adj);
    }
    ll dist[n];
    for(ll i=0; i<n; i++){
        dist[i] = INT_MAX;
    }
    dist[src] = 0;

    while(!st.empty()){
        ll node = st.top();
        st.pop();

        if(dist[node] != INT_MAX){
            for(auto it : adj[node]){
                if(dist[node] + it.second < dist[it.first]){
                    dist[it.first] = dist[node] + it.second;
                }
            }
        }
    }
    for(ll i=0; i<n; i++){
        // if(dist[i] == INT_MAX)
        // cout<<"inva"<<" ";
        // else
        cout<<dist[i]<<" ";
    }
}

int main(){

    ll V,E;
    cin>>V>>E;

    vector<pair<ll,ll>> adj[V+1];

    for(ll i=0; i<E; i++){
        ll u,v,wt;
        cin>>u>>v>>wt;

        adj[u].push_back({v,wt});
    }

    shortestPath(0, V, adj);



}

