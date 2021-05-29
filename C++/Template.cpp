#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

void solve(vector<int> &nums){

}

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++){
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++){
            cin >> nums[i];
        }
        solve(nums);
    }
}