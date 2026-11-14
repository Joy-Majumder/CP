#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> b(N);
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    if (find(b.begin(), b.end(), 9) == b.end())
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << *min_element(b.begin(), b.end()) << '\n';
    }
}