#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll m;
    while(true)
    {
        scanf("%lld",&m);
        if(m<0)
            break;

        if(m!=1)
        {
            ll f = m*25;
            printf("%lld%%\n",f);
        }

        else
            printf("0%%\n");


    }






}

