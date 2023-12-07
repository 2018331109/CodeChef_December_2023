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
    int f=0;
    int a[26];
    for(int i=0; i<26; i++)
    {
        a[i]=0;
    }

    for(auto it:s)
    {
        a[it-'a']++;
    }

    //int ans=(n*(n+1)/2)%mod;
    int ans=0;
    int total=0;
    for(int i=25; i>=0; i--)
    {
        if(a[i]>0 && f==0)
        {
            ans=a[i]% mod;
            f=1;
        }
        else if(a[i]>0 && f==1)
        {
            total=(a[i]+(a[i]*ans)) % mod;
            ans+=total;
            f=1;
            ans%=mod;
        }
        
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

