#include "Header.cpp"

struct SegmentTree {
    vll t;
    
    SegmentTree(int n){
        t.assign(4*n, 0);
        return;
    }
 
    ll f(ll a, ll b){
        return a+b;
    }
 
    void build(vll& a, int v, int tl, int tr){
        if(tl == tr){t[v] = a[tl];} 
        else{
            int tm = tl+(tr-tl)/2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
 
    ll query(int v, int tl, int tr, int l, int r) {
        if(l > r){return 0;}
        if(l == tl && r == tr){return t[v];}
        int tm = tl+(tr-tl)/2;
        return f(query(v*2, tl, tm, l, min(r, tm)), query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }
 
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr){t[v] = new_val;} 
        else {
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
};
 
int main()
{
    return 0;
}