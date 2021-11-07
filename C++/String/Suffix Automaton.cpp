#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

struct state{
    int len, link;
    map<char, int> next;
};

const int MAXLEN = 1e5;

struct SFA{
    state st[MAXLEN*2];
    int sz, last;

    void init() {
        st[0].len = 0;
        st[0].link = -1;
        sz++;
        last = 0;
    }

    void extend(char c) {
        int cur = sz++;
        st[cur].len = st[last].len + 1;
        int p = last;
        while (p != -1 && !st[p].next.count(c)) {
            st[p].next[c] = cur;
            p = st[p].link;
        }
        if (p == -1) {
            st[cur].link = 0;
        } else {
            int q = st[p].next[c];
            if (st[p].len + 1 == st[q].len) {
                st[cur].link = q;
            } else {
                int clone = sz++;
                st[clone].len = st[p].len + 1;
                st[clone].next = st[q].next;
                st[clone].link = st[q].link;
                while (p != -1 && st[p].next[c] == q) {
                    st[p].next[c] = clone;
                    p = st[p].link;
                }
                st[q].link = st[cur].link = clone;
            }
        }
        last = cur;
    }
};


string lcs(string S, string T) {
    SFA sfa = SFA();
    sfa.init();
    for (int i = 0; i < S.size(); i++)
        sfa.extend(S[i]);

    int v = 0, l = 0, best = 0, bestpos = 0;
    for (int i = 0; i < T.size(); i++) {
        while (v && !sfa.st[v].next.count(T[i])) {
            v = sfa.st[v].link;
            l = sfa.st[v].len;
        }
        if (sfa.st[v].next.count(T[i])) {
            v = sfa.st[v].next[T[i]];
            l++;
        }
        if (l > best) {
            best = l;
            bestpos = i;
        }
    }
    return T.substr(bestpos - best + 1, best);
} 
