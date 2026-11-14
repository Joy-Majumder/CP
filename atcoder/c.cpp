
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <climits>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cassert>
#include <bitset>
#include <utility>
#include <tuple>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <iterator>
#include <functional>
#include <limits>
#include <random>
#include <sstream>
#include <chrono>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

void solve()
{
    int as;
    cin >> as;
    vector<int> A(as), B(as);

    for (int i = 0; i < as; i++){
        cin >> A[i];
    }

    for (int i = 0; i < as; i++){
        cin >> B[i];
    }

    int l = 0, r = as - 1;

    while (l < as && A[l] == B[l]){
        l++;
    }
    while (r >= 0 && A[r] == B[r]){
        r--;
    }
    if (l >= r){
        cout << "No\n";
        return;
    }
    vector<int> x, y;
    for (int i = 0; i < as; i++){
        if (i != l){
            x.push_back(A[i]);
        }
        if (i != r){
            y.push_back(B[i]);
        }
    }

    cout << (x == y ? "No" : "Yes") << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
