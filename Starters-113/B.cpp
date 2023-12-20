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
    int n;
    cin>>n;
    int a[n];
    set<int>st;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }

    if(n==4)
    {
        if(a[0]+a[1] == a[2]+a[3])
        {
            no;
        }
        else
        {
            yes;
        }
        return;
    }

    if(st.size()>=2)
    {
        yes;
        return;
    }

    no;


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

