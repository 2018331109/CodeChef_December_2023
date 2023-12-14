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
    int t;
    int s;
    cin>>t>>s;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }


        if(s==0)
        {
            sort(v.begin(), v.end());
            int ans=0;
            int i=1;
            while(i<=n/2)
            {
                ans+=v[i];
                i++;

            }
            if(n%2)
            {
                ans+=v[0];
            }

            cout<<ans<<endl;

        }

        else
        {
            sort(v.begin(), v.end(), greater<int>());
            vector<int>pre(n);
            pre[0]=v[0];
            for(int i=1; i<n; i++)
            {
                pre[i]=pre[i-1]+v[i];
            }
            int ans=v[0];
            for(int i=1; i<n; i++)
            {
                if(i+i>=n)
                {
                    break;
                }
                int cur=pre[i+i]-pre[i-1];
                ans=max(ans, cur);
            }

            cout<<ans<<endl;
        }

    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

