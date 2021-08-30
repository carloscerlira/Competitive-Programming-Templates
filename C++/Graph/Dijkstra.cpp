#include "Header.cpp"

const int N = 1e5+1;
vector<vector<pii>> adj(N);

void dijkstra(int n, int s, vector<ll>& d, vector<vector<pii>>& adj) {
    d.assign(n, INF);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<long, int>>> q;
    d[s] = 0;
    q.push({d[s], s});
    while (!q.empty()) {
        ll du = q.top().F;
        int u = q.top().S;
        q.pop();
        if (du != d[u]){continue;}
        
        TR(edge, adj[u]){
            int v = edge.F;
            int w = edge.S;
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