#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d",a)
#define printll(a) printf("%lld",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ll t,a,b,c;
    scanll(t);
    for(int i=0;i<t;i++)
    {
        scanll(a);
        scanll(b);
        scanll(c);

        ll d= a+b+c -max(a,max(b,c))-min(a,min(b,c));

        printf("Case %d: %lld\n",i+1,d);
    }









}
