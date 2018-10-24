#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    ll a,b,t;
    scanf("%lld",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
            printf(">\n");
        else if (a<b)
            printf("<\n");
        else printf("=\n");


    }





}
