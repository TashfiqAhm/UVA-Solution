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


ll r(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;

    return n+r(n-1);
}

int main()
{
    ll n;
    for(;;)
    {
        scanll(n);
        if(n<0)
            break;

        ll res = r(n);

        printll(res);



    }


}

