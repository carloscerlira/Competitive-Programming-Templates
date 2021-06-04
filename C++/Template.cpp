#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


void solve(vector<int> &nums){

}

int main()
{
    ios_base::sync_with_stdio(0);  
    cin.tie(0); 
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &it : nums){
            cin >> it;
        }
        cout << endl;
        solve(nums);
    }
    return 0;
}