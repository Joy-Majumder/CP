
#include <iostream>
#include <string>
using namespace std;

using ll = long long;

bool isDistinct(int year){
    bool seen[10] = {false};
    while (year > 0){
        int digit = year % 10;
        if (seen[digit]){
            return false;
        }
        seen[digit] = true;
        year /= 10;
    }
    return true;
}

void solve(){
    int y;
    cin >> y;
    y++;
    while (!isDistinct(y)){
        y++;
    }

    cout << y << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}