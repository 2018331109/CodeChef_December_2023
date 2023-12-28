#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int mx=0;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<mx)
            {
                cnt++;
            }
            mx=max(mx, a[i]);
        }

        cout<<cnt<<endl;
    }

}

