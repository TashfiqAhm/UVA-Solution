#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        ll a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a<b+c && b<c+a && c<a+b)
        {
            if(a==b && b==c)
                printf("Case %d: Equilateral\n",i+1);
            else if(a!=b && b!=c && c!=a)
                printf("Case %d: Scalene\n",i+1);

            else printf("Case %d: Isosceles\n",i+1);

        }
        else printf("Case %d: Invalid\n",i+1);
    }





}

