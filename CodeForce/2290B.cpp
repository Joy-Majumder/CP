// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

using ll = long long;

void solve()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    char c = 'R';
    for (int i = 0; i < n; i++)
    {
        if (c != s[i]){
            count++;
            c = s[i];
        }
        if (c == 'R'){
            c = 'B';
        }else{
            c = 'R';
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
