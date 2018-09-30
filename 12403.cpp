#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t;
    ll tot=0;
    ll ty;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        string s1,s2;

        cin>>s1;

        if(s1[0]=='d')
        {
            scanf("%lld",&ty);
            tot=tot+ty;
        }
        else printf("%lld\n",tot);
    }






}

