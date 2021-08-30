#include "Header.cpp"

void subsets(){
    int n;
    FOR(i, 1, pow(2, n)){
        vi s;
        FOR(j, 0, 20){
            if(i & 1 << j){
                s.pb(j);
            }
        }
        debug(s);
    }
    return;
}

void permutations(){
    vi vec;
    sort(all(vec));
    do{
        debug(vec);
    }while (next_permutation(all(vec)));
    return;
}

int main(){
}