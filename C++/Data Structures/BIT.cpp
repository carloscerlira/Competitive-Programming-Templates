#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const int N = 1e5+1;

int lsb(int pos) {
    return pos & -pos;
}

template<typename T>
struct FenwickTree{
    int n;
    vector<T> BIT;

    FenwickTree(int n){
        this->n = n;
        BIT.resize(4*n, 0);
    }

    void update(int pos, T val){
        while (pos <= n){
            BIT[pos] += val;
            pos += lsb(pos);
        }
    }

    T query(int pos){
        T sum = 0;
        while (pos > 0){
            sum += BIT[pos];
            pos -= lsb(pos);
        }
        return sum;
    }
};

int main(){
    vector<int> arr = {1,2,3,6};
    int n = arr.size();
    FenwickTree<int> BIT = FenwickTree<int>(n);
    for(int i=1; i <= n; i++){
        BIT.update(i, arr[i-1]);
    }
    int res = BIT.query(n);
    cout << res << endl;
    return 0;
}
