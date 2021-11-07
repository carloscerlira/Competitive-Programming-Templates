#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

const int N = 1e5+1;
vector<vector<pair<int, int>>> adj(N);

template<typename T>
void dijkstra(int n, int s, vector<T>& d, vector<vector<pair<int, int>>>& adj) {
    d.assign(n, INF);
    priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> q;
    d[s] = 0;
    q.push({d[s], s});
    while (!q.empty()) {
        T du = q.top().first;
        int u = q.top().second;
        q.pop();
        if (du != d[u]){continue;}
        
        for(auto& edge : adj[u]){
            int v = edge.first;
            T w = edge.second;
            if (d[u] + w < d[v]) {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
}

void main(){
    return;
}