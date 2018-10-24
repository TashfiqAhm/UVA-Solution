#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll n;
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%lld",&n);
        ll m;

        if(n<10)
            m=n*n;
        else m=n;

        while(m>9)
        {
            ll sum=0;
            while(m!=0)
            {
                sum=sum+ (m%10) * (m%10) ;
                m=m/10;
            }
            m=sum;

        }

        if(m==1)
            printf("Case #%d: %lld is a Happy number.\n",i+1,n);

        else
            printf("Case #%d: %lld is an Unhappy number.\n",i+1,n);
    }





}

