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
ll ar[50];
int main()
{
    ll n;
    ll t;
    ll m;
    while(1)
    {
        scanll(n);
        if(n<0)
            break;
        m=0;
        if(n==0)
            printf("0");

        else
        {
            while(n!=0)
            {
                t=n%3;
                n=n/3;;
                ar[m]=t;
                m++;
            }
            m--;
            for(int i=m; i>=0; i--)
                printf("%lld",ar[i]);
        }
        printf("\n");
    }
}
