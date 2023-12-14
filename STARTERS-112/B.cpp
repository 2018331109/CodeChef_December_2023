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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find('0')== string::npos)
    {
        for(int i=0; i<n-1; i++)
        {
            cout<<"IDK"<<endl;
        }
        yes;
        return;
    }
    int i=0;
    while(i<n && s[i]=='1')
    {

        cout<<"IDK"<<endl;
        i++;
    }
    while(i<n)
    {
        no;
        i++;
    }


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

