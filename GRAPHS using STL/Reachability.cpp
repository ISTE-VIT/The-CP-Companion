//Find if there is a path between two vertices in a directed graph

#include<bits/stdc++.h>
using namespace std;

int func(vector<int> adj[], int s, int d, int n)
{
    bool visited[n] = {false};

    queue<int> q;
    q.push(s);
    visited[s] =true;

    while(!q.empty())
    {
        if(visited[d] == true)
        {
            return 1;
        }
        int t = q.front();
        q.pop();
        for(int i=0;i<adj[t].size();i++){
            if(!visited[adj[t][i]]){
                visited[adj[t][i]]=true;
                q.push(adj[t][i]);
            }
        }

    }
    return 0;

}


int main()
{
    int n;
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter number of Edges: ";
    int e;
    cin>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        a:int temp1,temp2;
        cout<<"Enter source and destination: ";
        cin>>temp1>>temp2;
        if(temp1>=n || temp2>=n){
            cout<<"Error"<<endl;
            goto a;
        }
        adj[temp1].push_back(temp2);
    }
    int s,d;
    cout<<" check Enter source and destination: ";
    cin>>s>>d;
    int x;
    x = func(adj,s,d,n);
    if(x == 1){
        cout<<"\n Yes points are connected";
    }
    else{
        cout<<"\n No points are not connected";
    }
}
