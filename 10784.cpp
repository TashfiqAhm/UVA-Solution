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
    ll n;
    int i=0;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        if(n<=1)
            printf("Case %lld: 0\n",i+1);

        else
        {
            double a;
            a=ceil((3.0+ sqrt(9.0+(8.0*n)))/2.00);

            printf("Case %d: %.0lf\n",i+1,a);
        }


        i++;

    }


}

