#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define sc second
#define fs first

int mod = 1e9 + 7;
int md = 998244353;
const int INF = 1e18;


void solve()
{
    int a, b;
    cin>>a>>b;
    if(b+1>=a)
    {
        cout<<1<<endl;
        return;
    }
    if((b+1)*2 >= a)
    {
        cout<<2<<endl;
        return;
    }
    int ans=a-b-b;
    cout<<ans<<endl;

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

