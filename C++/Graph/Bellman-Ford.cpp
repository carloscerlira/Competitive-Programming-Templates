#include <bits/stdc++.h>
using namespace std;
#define print(x) cout << x << endl;

struct edge
{
    int a, b, cost;
};

int n, m, v;
vector<edge> e;
const int INF = 1e9;

void solve()
{
    vector<int> d (n, INF);
    d[v] = 0;
    for (int i=0; i<n-1; ++i)
        for (int j=0; j<m; ++j)
            if (d[e[j].a] < INF)
                d[e[j].b] = min (d[e[j].b], d[e[j].a] + e[j].cost);
}

void main(){
    return;
}