#include <bits/stdc++.h>

#define MAX 1010

using namespace std;

vector <pair<int, pair<int, int> > > edges;
int parent[MAX], _rank[MAX];

int find_set(int x){
    if(x == parent[x]) return x;
    return parent[x] = find_set(parent[x]);
}

bool union_set(int x, int y){
    int i = find_set(x),
        j = find_set(y);

    if(i != j){
        if(_rank[i] > _rank[j]){
            parent[j] = i;
            _rank[i] += _rank[j];
        }else{
            parent[i] = j;
            _rank[j] += _rank[i];
        }

        return true;
    }
    return false;
}

int kruskal(int v, int e){
    int mst = 0, k = 0, w, x, y;
    
    sort(edges.begin(), edges.end());

    for(int i = 0; i < e && k < v - 1; i++){
        w = edges[i].first;
        x = edges[i].second.first, y = edges[i].second.second;

        if(union_set(x, y)){
            mst += w;
            k++;
        }
    }
    
    return mst;
}

int main(){

    int v, e, x, y, w;

    for(int i = 1; i <= v; i++){
        _rank[i] = 0;
        parent[i] = i;
    }

    while(e--){
        scanf("%d %d %d", &x, &y, &w);
        edges.push_back(make_pair(w, make_pair(x, y)));
    }

    kruskal(v, e);

    return 0;
}