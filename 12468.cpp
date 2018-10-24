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

    ll a,b;
    while(1)
    {
        scanll(a);
        scanll(b);

        if(a==-1 && b ==-1)
            break;
        if(a>b)
        {
        }
        else
        {
            int c=b;
            b=a;
            a=c;

        }
        ll r1=a-b;
        ll r2=99-a+1+b;
        ll c;
        if(r1<r2)
            c=r1;
        else c=r2;
        printll(c);

    }

}

