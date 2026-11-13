    #include <iostream>
    #include <string>
    using namespace std;

    using ll = long long;
    void solve()
    {
        int a , b,c;
        cin>>a>>b>>c;
        if (a+b+c <= 1)
        {
            cout <<"Water filling time"<<'\n';
        } else{
            cout<<"Not now"<<'\n';
        }
        
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
