
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
    ll t,n;
    scanll(t);

    ll b1,b2;



    for(int i=0;i<t;i++)
    {
        scanll(n);

        ll m=n;
        b1=0;
        b2=0;

        while(m!=0)
        {
            if(m%2!=0)
                b1++;
            m=m/2;
        }

        m=n;

        while(m!=0)
        {
            int p=m%10;
            m=m/10;
            int l;
            if(p==1 ||p==2 ||p==4 ||p==8 )
                l=1;
            if(p==3 ||p==5 ||p==6 ||p==9 )
                l=2;
            if(p==7)
                l=3;

            b2=b2+l;
        }

        printf("%lld %lld\n",b1,b2);



    }



}
