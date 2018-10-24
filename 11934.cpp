#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll a,b,c,d,l;

    for(;;)
    {
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l);
        if(a==0 && b==0&&c==0&&d==0&&l==0)
        break;
        ll cn=0;

        for(int i=0;i<=l;i++)
        {
            ll m=a*i*i+b*i+c;

            if(m%d==0)
                cn++;
        }

        printf("%lld\n",cn);
    }





}
