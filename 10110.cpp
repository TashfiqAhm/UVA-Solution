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

    ll n;
    while(1)
    {
        scanll(n);
        if(n==0)
            break;

        ll a=sqrt(n);
        if(a*a==n)
        printf("yes\n");
        else printf("no\n");
    }



}

