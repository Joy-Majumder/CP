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

    void solve() {
        int n;
        cin>>n;
        int d=0;
        while (n>0)
        {
            int ld = n % 10; // by this we can get tha last value like 12345 so by this we get 5;
            d= d+ld;
            n = n/10; // by this remove last digit 
        }
        cout<<d<<endl;
        
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while (t--) {
            solve();
        }

        return 0;
    }