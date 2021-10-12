

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> adj[100001];
ll vis[100001];


void dfs(ll node){

    vis[node] = 1;

    for(ll child : adj[node]){
        if(!vis[child])
        dfs(child);
    }

}




int main(){

    ll V,E;
    cin>>V>>E;

    for(ll i=0; i<E; i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll cc=0;

    for(ll i=1; i<=V; i++){
        if(!vis[i]){
            dfs(i);
            cc++;
        }
    }
    cout<<cc;


    
