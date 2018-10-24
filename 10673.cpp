#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(-1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ll t;
    scanll(t);
    ll x,k,p,q;
    ll f,c;
    for(int i=0;i<t;i++)
    {
        scanll(x);
        scanll(k);

        f= floor(x/(k*(1.0)));
        c= ceil(x/(k*(1.0)));

        p=0;

        while(p*f<=x)
        {
            if((x-p*f)%c==0)
            {
                q=(x-p*f)/c;
                break;
            }
            p++;
        }
        printf("%lld %lld\n",p,q);
    }


}

