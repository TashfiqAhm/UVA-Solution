#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll n,k;

    while(scanf("%lld",&n)!=EOF)
    {
        scanf("%lld",&k);

        ll tm=n;
        ll nbt= n;

        while(nbt>=k)
        {
            tm=tm+nbt/k;
            nbt=nbt/k +nbt%k;
        }

        printf("%lld\n",tm);


    }








}

