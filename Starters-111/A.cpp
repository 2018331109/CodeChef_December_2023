#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;
int md = 998244353;

const int INF = 1e18;

void solve()
{
    string s="AEIOU";
    string p;
    cin>>p;
    for(int i=0; i<8; i++)
    {
        if(i==1 || i==3 || i==5)
        {
            if(s.find(p[i]) == string::npos)
            {
                no;
                return;
            }
        }
        else if(s.find(p[i]) != string::npos)
        {
            no;
            return;
        }

    }

    yes;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

