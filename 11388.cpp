#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos-1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll t,g,l;
    ll u;
    ll x,y;

    scanll(t);

    for(int i=0;i<t;i++)
    {
        scanll(g);
        scanll(l);

        if(l%g==0)
        {
            u=l/g;
            x=-1;
            y=-1;

            for(int j=1;j*j<=u;j++)
            {
                if(u%j==0)
                {
                    x=j;
                    y=(u/j);
                    break;
                }
            }

            if(x==-1)
                printf("-1\n");
            else printf("%lld %lld\n",x*g,y*g);
        }
        else printf("-1\n");
    }
}

