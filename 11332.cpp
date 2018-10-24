#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll a;

    while(true)
    {
        scanf("%lld",&a);
        if(a==0)
            break;

        while(a>=10)
        {
            int cn=0;

            while(a!=0)
            {
                cn=cn+a%10;
                a=a/10;
            }
            a=cn;
        }

        printf("%d\n",a);
    }






}

