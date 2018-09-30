#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll a,b,c;

    while(true)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a==0 && b==0 && c==0)
            break;

        if(a==0 || b==0||c==0)
            printf("wrong\n");

        else if(a*a+b*b==c*c)
            printf("right\n");

        else if(c*c+b*b==a*a)
            printf("right\n");

        else if(a*a+c*c==b*b)
            printf("right\n");

            else printf("wrong\n");
    }





}

