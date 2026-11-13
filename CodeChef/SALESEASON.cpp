#include <iostream>
#include <string>
using namespace std;

using ll = long long;

void solve() {
    int a ;
    cin>> a;
    if(a<=100){
        cout<<a<<endl;
    }
    else if (a <= 250 || a <= 1000)
    {
        cout << (a - 25) << endl;
    }
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