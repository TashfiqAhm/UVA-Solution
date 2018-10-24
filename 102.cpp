#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll b1,g1,c1,b2,g2,c2,b3,g3,c3;

    while(scanf("%lld",&b1)!=EOF)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3);

        ll bgc = b2+b3+g1+g3+c1+c2 ;
        ll bcg = b2+b3+c1+c3+g1+g2;
        ll cgb = c2+c3+g1+g3+b1+b2;
        ll cbg = c2+c3+b1+b3+g1+g2;
        ll gbc = g2+g3+b1+b3+c1+c2;
        ll gcb = g2+g3+c1+c3+b1+b2;

        ll m=min(bgc,min(bcg,min(cgb,min(cbg,min(gbc,gcb)))));

        if(m==bcg)
            printf("BCG %lld\n",bcg);

        else if(m==bgc)
            printf("BGC %lld\n",bgc);

        else if(m==cbg)
            printf("CBG %lld\n",cbg);

        else if(m==cgb)
            printf("CGB %lld\n",cgb);

        else  if(m==gbc)
            printf("GBC %lld\n",gbc);

        else if(m==gcb)
            printf("GCB %lld\n",gcb);


    }





}
