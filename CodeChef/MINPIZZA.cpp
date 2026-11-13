#include <iostream>
#include <string>
using namespace std;

using ll = long long;

void solve() {
    int a,b;
    cin>>a>>b;
    int t = a * b;
    int p = (t + 3) / 4;
    cout<<p<<endl;
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