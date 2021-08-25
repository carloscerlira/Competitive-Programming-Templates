#include <bits/stdc++.h>
using namespace std;

#define F                           first
#define S                           second
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const int INF = 1e9;
vector<vector<pii>> adj;

void dijkstra(int s, vi& d, vi& p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().S;
        int dv = q.top().F;
        q.pop();
        if (dv != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.F;
            int len = edge.S;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}

void main(){
    return;
}