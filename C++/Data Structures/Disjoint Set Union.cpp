#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e9;

const int N = 1e5+1;
vector<int> par(N), rnk(N);

void make_set(int v) {
    par[v] = v;
    rnk[v] = 1;
}

int find_set(int v) {
    if (v == par[v]){return v;}
    return par[v] = find_set(par[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a==b){return;}
    if (rnk[a] < rnk[b]){swap(a, b);}
    par[b] = a;
    rnk[a] += rnk[b];
}
