#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll a,b;

    while(scanf("%lld",&a)!=EOF)
    {
        scanf("%lld",&b);

        ll m=max(a,b);
        ll n=min(a,b);

        printf("%lld\n",m-n);
    }




}

