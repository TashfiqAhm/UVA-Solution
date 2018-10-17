
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ull t;
    for(;;)
    {
        scanf("%llu",&t);

        if(t==0)
            break;

        int f=0;

        ull n=0,m=0,a=1;

        while(t!=0)
        {
            if(t&1==1)
            {
                if(f==0)
                    {
                        n=n+a;
                        f=1;
                    }

                else
                    {
                        m=m+a;
                        f=0;
                    }
            }
            t=t/2;
            a=a*2;

            //printf("%llu %llu\n",a,b);

        }

        printf("%llu %llu\n",n,m);
    }


}
