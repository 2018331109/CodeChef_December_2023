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
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    vector<int>ans;
    int total=0;
    int i=0;
    set<int>st;
    while(true)
    {
        int l=lower_bound(v.begin(), v.end(), total+1)-v.begin();
        if(l==n)
        {
            break;
        }
        else
        {
            st.insert(l);
            ans.pb(v[l]);
            total+=v[l];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(st.find(i)==st.end())
        {
            ans.pb(v[i]);
        }
    }

    cout<<n-st.size()<<endl;

    for(auto it:ans)
    {
        cout<<it<<" ";
    }

    cout<<endl;

    st.clear();
    ans.clear();
    v.clear();

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

