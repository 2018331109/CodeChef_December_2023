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
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        //mp[a[i]]++;
        mx=max(mx, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(mp[a[i]] > 0)
         {
             a[i]=mx;
             }
        mp[a[i]]++;

    }

    for(auto it:a)
    {
        cout<<it<<" ";
    }

    cout<<endl;
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

