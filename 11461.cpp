#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    ll a,b;
    while(true)
    {
        ll cn=0;
        scanf("%lld %lld",&a,&b);
        if(a==0 &&b==0)
            break;
        ll c;
        for(int j=a;j<=b;j++)
        {
            c=sqrt(j);
            if(c*c==j)
                cn++;

        }
        printf("%lld\n",cn);
    }







}

