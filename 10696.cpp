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


ll f(ll n)
{
    if(n>=101)
        return n-10;

    ll y=f(n+11);

    return f(y);


}

int main()
{
    ll n;
    while(true)
    {
        scanf("%lld",&n);
        if(n==0)
            break;

        ll res=f(n);

        printf("f91(%lld) = %lld\n",n,res);

    }


}
