#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const int N = 1e5+1;

vector<long long> BIT(4*N, 0);

int lsb(int pos) {
    return pos & -pos;
}

void update(int pos, int val){
    while (pos <= N){
        BIT[pos] += val;
        pos += lsb(pos);
    }
}

int query(int pos){
   int sum = 0;
   while (pos > 0){
      sum += BIT[pos];
      pos -= lsb(pos);
   }
   return sum;
}
