#include <bits/stdc++.h>
using namespace std;
#define print(x) cout << x << endl;

const int N = 1e5+1;
vector<int> parent(N), rnk(N);

void make_set(int v) {
    parent[v] = v;
    rnk[v] = 1;
}

int find_set(int v) {
    if (v == parent[v]){return v;}
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a==b){return;}
    if (rnk[a] < rnk[b]){swap(a, b);}
    parent[b] = a;
    rnk[a] += rnk[b];
}
