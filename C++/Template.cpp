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

int main()
{
    int n = 10, s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    int k = log10(n*(n+1)/2);
    cout << k << endl;
    cout << s << endl; 
    cout << "Hello World";      
    return 0;
}