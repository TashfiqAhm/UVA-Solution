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
    int t,n,k,p;
    scan(t);
    for(int i=0;i<t;i++)
    {
        scan(n);
        scan(k);
        scan(p);
        int p1=k;

        for(int j=0;j<p;j++)
        {
            p1++;
            if(p1==n+1)
                p1=1;
        }
        printf("Case %d: %d\n",i+1,p1);
    }






}
