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
        string s;
        cin>>s;

        string ans;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            ans+='P';
            if(s[i]=='R')
            {
                cnt++;
            }
        }
        if(cnt>=(n/2)+1)
        {
            cout<<ans<<endl;
        }
        else
        {
            int need=(n/2)-cnt+1;

            int it=n-1;
            while(need>0)
            {
                if(s[it]=='S')
                {
                    ans[it]='R';
                    need--;
                }
                else if(s[it]=='P')
                {
                    ans[it]='S';
                    need--;
                }
                it--;
            }

            cout<<ans<<endl;
        }


    }

}

