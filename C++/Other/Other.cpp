#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

vector<pair<int, int>> dirs = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

template<class T>
struct vec{
    T x, y;

    vec<T> operator-(vec<T> other){
        vec<T> res;
        res.x = x-other.x;
        res.y = y-other.y;
        return res;
    }

    vec<T> operator+(vec<T> other){
        vec<T> res;
        res.x = x+other.x;
        res.y = y+other.y;
        return res;
    }

    vec<T> operator*(T c){
        vec<T> res;
        res.x = c*x;
        res.y = c*y;
        return res;
    }

    bool operator==(vec<T> other){
        return (x == other.x && y == other.y);
    }

    T dot(vec<T> other){
        return x*other.x+y*other.y;
    }
    
    T norm(){
        return sqrt(x*x+y*y);
    }
};

long long get_gcd (long long a, long long b) {
    return b ? get_gcd (b, a % b) : a;
}

long long binpow(long long a, long long b, long long m){
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

long long get_modinv(long long a, long long m){
    return binpow(a, m-2, m);
}

void gen_subsets(){
    int n;
    for(int i=1; i < pow(2, n); i++){
        vector<int> s;
        for(int j=0; j < 20; j++){
            if(i & 1 << j){
                s.push_back(j);
            }
        }
    }
    return;
}

void gen_permutations(){
    vector<int> vec;
    sort(vec.begin(), vec.end());
    do{
        //something
    }while (next_permutation(vec.begin(), vec.end()));
    return;
}


int main(){
}