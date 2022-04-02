#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

template<typename T>
struct RangeUpdate {
    vector<T> t;
    
    RangeUpdate(int n){
        t.assign(4*n, 0);
        return;
    }
 
    void build(vector<T>& a, int v, int tl, int tr) {
        if (tl == tr) {
            t[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = 0;
        }
    }

    void update(int v, int tl, int tr, int l, int r, T add) {
        if (l > r) return;
        if (l == tl && r == tr) {t[v] += add;} 
        else {
            int tm = (tl + tr) / 2;
            update(v*2, tl, tm, l, min(r, tm), add);
            update(v*2+1, tm+1, tr, max(l, tm+1), r, add);
        }
    }

    T get(int v, int tl, int tr, int pos) {
        if (tl == tr)
            return t[v];
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            return t[v] + get(v*2, tl, tm, pos);
        else
            return t[v] + get(v*2+1, tm+1, tr, pos);
    }
};
 


template<typename T>
struct SegmentTree{
    int n;
    vector<T> t;
    
    SegmentTree(int n){
        this->n = n;
        t.assign(4*n, 0);
        return;
    }
 
    T f(T a, T b){
        return a+b;
    }
 
    void build(vector<T>& a, int v, int tl, int tr){
        if(tl == tr){t[v] = a[tl];} 
        else{
            int tm = tl+(tr-tl)/2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }

    void build(vector<T>& a){
        build(a, 1, 0, n-1);
    }
 
    T query(int v, int tl, int tr, int l, int r) {
        if(l > r){return 0;}
        if(l == tl && r == tr){return t[v];}
        int tm = tl+(tr-tl)/2;
        return f(query(v*2, tl, tm, l, min(r, tm)), query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }

    T query(int l, int r) {
        return query(1, 0, n-1, l, r);
    }
 
    void update(int v, int tl, int tr, int pos, T new_val){
        if (tl == tr){t[v] = new_val;} 
        else{
            int tm = tl+(tr-tl)/2;
            if (pos <= tm){
                update(v*2, tl, tm, pos, new_val);
            }
            else{
                update(v*2+1, tm+1, tr, pos, new_val);
            }
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
    void update(int pos, T new_val){
        return update(1, 0, n-1, pos, new_val);
    }
};


int main(){
    vector<int> arr= {3,2,1};
    int n = arr.size();
    SegmentTree<int> st = SegmentTree<int>(n);
    st.build(arr);
    int res = st.query(0, n-1);
    cout << res;
    return 0;
}