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
    int a[n];
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[a[i]]=max(mp[a[i]], x);
    }

    vector<int>v;
    for(auto it:mp)
    {
        v.pb(it.second);
    }
    sort(v.begin(), v.end(), greater<int>());

    int ans=0;
    int i=0;
    while(i<v.size() && v[i]>0)
    {
        ans+=v[i];
        i++;
    }

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

